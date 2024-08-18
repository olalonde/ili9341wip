#include <zephyr/kernel.h>
#include <zephyr/device.h>
#include <zephyr/devicetree.h>
#include <zephyr/drivers/gpio.h>
#include <zephyr/logging/log.h>
#include "lib/ili9341.h"
// #include "constants.h"

LOG_MODULE_REGISTER(lcd);

/**
 * @desc    Main function
 *
 * @param   Void
 *
 * @return  Void
 */
int main(void)
{
  // init lcd
  ILI9341_Init();

  // clear Screen
  ILI9341_ClearScreen(ILI9341_BLACK);

  // draw horizontal fast line
  ILI9341_DrawLineHorizontal(10, ILI9341_MAX_X - 10, 12, ILI9341_WHITE);
  // draw horizontal fast line
  ILI9341_DrawLineHorizontal(10, ILI9341_MAX_X - 10, 50, ILI9341_WHITE);

  // set position
  ILI9341_SetPosition(11, 25);  
  // draw string
  ILI9341_DrawString("ILI9341 LCD DRIVER", ILI9341_RED, X3);

  // EXIT
  // ------------------------------------------------- 
  // return & exit
  return 0;
}



