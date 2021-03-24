#include "mbed.h"
#include "TextLCD.h"

DigitalOut led(LED1);      //LED1 = PA_5
TextLCD lcd(D2, D3, D4, D5, D6, D7);

int main()
{
      int x=30;
      lcd.printf("106061131\n");
      while(true)
      {
            led = !led;             // toggle led
            lcd.locate(0,1);
            lcd.printf("%5i sec",x);    //counter display
            ThisThread::sleep_for(1s);
            x--;
      }
}
