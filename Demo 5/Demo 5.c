#include <16f877a.h>
#fuses HS, NoWDT
#use delay(clock=12M)
//=================================

void main()
{
   while(TRUE)
   {
   // LedR1 = on; LedR2 = on : 4s
   output_high(pin_B0); // LedR1 on
   output_high(pin_B5); // LedG2 on
   delay_ms(5000);
   //..................................
   // LedR1 = on; LedY2 = on : 1s
   output_high(pin_B0); // LedR1 on
   output_low(pin_B5); // LedG2 off
   output_high(pin_B6); // LedY2 on
   delay_ms(1000);
   //..................................
   // LedG1 = on; LedR2 = on : 4s
   output_low(pin_B6); // LedY2 off
   output_high(pin_B7); // LedR2 on
   output_low(pin_B0); // LedR1 off
   output_low(pin_B2); // LedG1 on
   delay_ms(4000);
   //..................................
   // LedY1 = on; LedR2 = on : 1s
   output_low(pin_B2);  //LedG1 off
   output_high(pin_B1); // LedY1 on
   output_high(pin_B7); // LedR2 on
   delay_ms(1000);
   //..................................
   // LedY1 = off; LedR2 = off
   output_low(pin_B1);  //LedY off
   output_low(pin_B7); // LedR2 off  
   }
}
