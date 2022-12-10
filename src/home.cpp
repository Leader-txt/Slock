#include "home.h"
#include <lvgl.h>
#include "../lib/ui/ui.h"
#include "sd_card.h"

SdCard tf;
void Home::Init()
{
    tf.init();
    
    ui_init();
}