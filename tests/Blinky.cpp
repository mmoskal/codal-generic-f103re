#include "F103RE.h"

F103RE dev;

void
onClick(Event)
{
    dev.serial.printf("CLICK\r\n");
}

int
main()
{
    dev.init();
    dev.serial.printf(" *** BLINKY TEST ***\r\n");

    while(1)
    {
        dev.io.led.setDigitalValue(1);
        dev.sleep(200);

        dev.io.led.setDigitalValue(0);
        dev.sleep(200);
    }
}
