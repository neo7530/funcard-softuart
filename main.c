#include "config.h"
#include <util/delay.h>
#include <avr/io.h>
#include "uart.h"


int main(void)
{
  int i;
  io_init();
  enable_tx();
//  serOut("Serial echo test\n\r");

    uint16_t a, b;
    a = b = 0;

while(1){

    _delay_ms(1);
    enable_rx();



    b = io_read();
    enable_tx();

for(i=15;i>-1;i--){
    io_write((b >> i)& 1);
}


}

    return 0;
}
