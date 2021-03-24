#include "mbed.h"
#include "uLCD_4DGL.h"

uLCD_4DGL uLCD(D1, D0, D2); // serial tx, serial rx, reset pin;

int main()
{
    int x=30;

    uLCD.background_color(WHITE);
    uLCD.textbackground_color(WHITE);
    uLCD.reset();
    uLCD.color(BLUE);
    uLCD.printf("106061131\n");
    uLCD.text_width(2); //4X size text
    uLCD.text_height(2);
    uLCD.color(GREEN);
    while(true)
    {
        uLCD.locate(0,2);
        uLCD.printf("%3i sec",x);    //counter display
        ThisThread::sleep_for(1s);
        x--;
    }
}
