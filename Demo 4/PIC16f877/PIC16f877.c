#include <16f877a.h>
#use delay (crystal = 20000000)
void main()
{

   //example blinking LED program
   while(true)
   {
      output_low(pin_B0);
      delay_ms(1000);
      output_high(pin_B0);
      delay_ms(1000);
   }
}
