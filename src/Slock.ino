/*Using LVGL with Arduino requires some extra steps:
 * Be sure to read the docs here: https://docs.lvgl.io/master/get-started/platforms/arduino.html  */

#include <lvgl.h>
#include <TFT_eSPI.h>
#include <Wire.h>
#include <SD.h>
#include <SPI.h>
/*To use the built-in examples and demos of LVGL uncomment the includes below respectively.
 *You also need to copy `lvgl/examples` to `lvgl/src/examples`. Similarly for the demos `lvgl/demos` to `lvgl/src/demos`.*/
// #include <lv_demos.h>
// #include <lv_examples.h>
#include "home.h"

/*Change to your screen resolution*/
static const uint16_t screenWidth = 320;
static const uint16_t screenHeight = 170;

static lv_disp_draw_buf_t draw_buf;
static lv_color_t buf[screenWidth * 10];

TFT_eSPI tft = TFT_eSPI(screenWidth, screenHeight + 35); /* TFT instance */

#if LV_USE_LOG != 0
/* Serial debugging */
void my_print(const char *buf)
{
    Serial.printf(buf);
    Serial.flush();
}
#endif

/* Display flushing */
void my_disp_flush(lv_disp_drv_t *disp, const lv_area_t *area, lv_color_t *color_p)
{
    uint32_t w = (area->x2 - area->x1 + 1);
    uint32_t h = (area->y2 - area->y1 + 1);

    tft.startWrite();
    tft.setAddrWindow(area->x1, area->y1 + 35, w, h);
    tft.pushColors((uint16_t *)&color_p->full, w * h, true);
    tft.endWrite();

    lv_disp_flush_ready(disp);
}
void touchInit()
{
    Wire.begin(10, 11);
    pinMode(3, INPUT);
    pinMode(9, OUTPUT);
    digitalWrite(9, 0);
    delay(50);
    digitalWrite(9, 1);
}
/*Read the touchpad*/
void my_touchpad_read(lv_indev_drv_t *indev_driver, lv_indev_data_t *data)
{
    uint16_t touchX, touchY;
    Wire.beginTransmission(0x55);
    Wire.write(0x11);
    Wire.endTransmission(false); // Restart
    auto count = Wire.requestFrom(0x55, 10);
    byte fig[4];
    for (int i = 0; i < count && Wire.available(); i++)
    {
        //          Serial.println(Wire.read());
        fig[i] = Wire.read();
    }
    //    bool touched = tft.getTouch( &touchX, &touchY, 600 );

    uint16_t temp = fig[1];
    temp = temp << 9;
    temp = temp >> 1;
    temp += fig[3];
    touchX = temp;
    touchY = fig[2];
    if (!(fig[1] >> 7))
    {
        data->state = LV_INDEV_STATE_REL;
    }
    else
    {
        data->state = LV_INDEV_STATE_PR;

        /*Set the coordinates*/
        data->point.x = touchX;
        data->point.y = touchY;

        Serial.print("Data x ");
        Serial.println(touchX);

        Serial.print("Data y ");
        Serial.println(touchY);
    }
}

void setup()
{
    Serial.begin(9600); /* prepare for possible serial debug */

    String LVGL_Arduino = "Hello是 Arduino! ";
    LVGL_Arduino += String('V') + lv_version_major() + "." + lv_version_minor() + "." + lv_version_patch();

    Serial.println(LVGL_Arduino);
    Serial.println("I am LVGL_Arduino");

    lv_init();

#if LV_USE_LOG != 0
    lv_log_register_print_cb(my_print); /* register print function for debugging */
#endif

    tft.begin();        /* TFT init */
    tft.setRotation(1); /* Landscape orientation, flipped */
    /*Set the touchscreen calibration data,
     the actual data for your display can be acquired using
     the Generic -> Touch_calibrate example from the TFT_eSPI library*/
    uint16_t calData[5] = {275, 3620, 264, 3532, 1};
    tft.setTouch(calData);
    touchInit();
    lv_disp_draw_buf_init(&draw_buf, buf, NULL, screenWidth * 10);

    /*Initialize the display*/
    static lv_disp_drv_t disp_drv;
    lv_disp_drv_init(&disp_drv);
    /*Change the following line to your display resolution*/
    disp_drv.hor_res = screenWidth;
    disp_drv.ver_res = screenHeight;
    disp_drv.flush_cb = my_disp_flush;
    disp_drv.draw_buf = &draw_buf;
    lv_disp_t* disp= lv_disp_drv_register(&disp_drv);

    /*Initialize the (dummy) input device driver*/
    static lv_indev_drv_t indev_drv;
    lv_indev_drv_init(&indev_drv);
    indev_drv.type = LV_INDEV_TYPE_POINTER;
    indev_drv.read_cb = my_touchpad_read;
    lv_indev_drv_register(&indev_drv);

#if 1
    /* Create simple label */
    String res = "Sd inited";
    pinMode(2, OUTPUT);
    pinMode(42, OUTPUT);
    pinMode(38, OUTPUT);
    digitalWrite(2, 0);
    digitalWrite(42, 1);
    // SPIClass spi = SPIClass(HSPI);
    // spi.begin(39 /*sck*/, 41 /*miso*/, 40 /*mosi*/, 38 /*cs*/);
    // if(!SD.begin(38,spi))
    //     res="sd init failed";
    
    Home::Init();
    // lv_label_set_text( label, res.c_str() );
#else
    /* Try an example from the lv_examples Arduino library
       make sure to include it as written above.
    lv_example_btn_1();
   */

    // uncomment one of these demos
    lv_demo_widgets(); // OK
                       // lv_demo_benchmark(LV_DEMO_BENCHMARK_MODE_REAL); // OK
                       // lv_demo_keypad_encoder();     // works, but I haven't an encoder
                       // lv_demo_music();              // NOK
                       // lv_demo_printer();
                       // lv_demo_stress();             // seems to be OK
#endif
    Serial.println("Setup done");
}

void loop()
{
    lv_timer_handler(); /* let the GUI do its work */
    delay(5);
}
