#include <stdio.h>
#include <stdlib.h>
#include "diag/trace.h"

#include "timer.h"
#include "led.h"

// ----- Timing definitions -------------------------------------------------

// Keep the LED on for 2/3 of a second.
#define BLINK_ON_TICKS  (TIMER_FREQUENCY_HZ * 3 / 4)
#define BLINK_OFF_TICKS (TIMER_FREQUENCY_HZ - BLINK_ON_TICKS)

// Declare and initialize the temperature array
int temperature[] = {22, 23, 33, 35, 12, 34, 27, 15, 37, 16, 28, 41, 18, 17, 24, 28, 32, 21, 38, 9};

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic ignored "-Wreturn-type"

int
main(int argc, char* argv[])
{
  trace_puts("TRÌNH ĐIỀU KHIỂN QUẠT THEO NHIỆT ĐỘ!");
  trace_puts("Nhiệt độ lớn hơn hoặc bằng 30 độ C sẽ tiến hành bật quạt gió nấc CAO.");
  trace_puts("Nhiệt độ trong khoảng 21 đến 29 độ C sẽ tiến hành bật quạt gió nấc THẤP.");
  trace_puts("Nhiệt độ thấp hơn 20 độ C sẽ tắt quạt gió.");
  //puts("Standard output message.");
  //fprintf(stderr, "Standard error message.\n");
  trace_printf("System clock: %u Hz\n", SystemCoreClock);
  timer_start();
  blink_led_init();
  //Khai bao bien seconds
  uint32_t seconds = 0;
  // Infinite loop
  while (1)
    {
      //blink_led_on();
      timer_sleep(seconds == 0 ? TIMER_FREQUENCY_HZ : BLINK_ON_TICKS);
      //blink_led_off();
      timer_sleep(BLINK_OFF_TICKS);
      ++seconds;
      // Count seconds on the trace device.
      trace_printf("Second %u\n", seconds);
      // Print the current temperature
      trace_printf("Temperature input approximate: %d Celcius\n", temperature[seconds % 20]);
      // Check if the current temperature is above 30
      if (temperature[seconds % 20] >= 30) {
        blink_led_on(); // Turn on the LED
        trace_puts("BẬT QUẠT GIÓ NẤC CAO, LED XANH BẬT!");
      } else {
          if (temperature[seconds % 20] > 20 && temperature[seconds % 20] < 30) {
              blink_led_on(); // Turn on the LED
              trace_puts("BẬT QUẠT GIÓ NẤC THẤP, LED XANH BẬT!");
          } else {
              blink_led_off(); // Turn off the LED
              trace_puts("TẮT QUẠT GIÓ, LED XANH TẮT!");
          }
      }
    }
}
#pragma GCC diagnostic pop
