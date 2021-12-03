#include <16f877a.h>
#use delay(clock=10MHz)
#fuses HS
void main()
{
while(true)
{
if((input(pin_a0)==1) && (input(pin_a1)==1))
{
output_b(0x05);//Now forwad
}
if((input(pin_a0)==0) && (input(pin_a1)==0))
{
output_b(0x00);//Now stop
}
if((input(pin_a0)==1) && (input(pin_a1)==0))
{
output_b(0x00);//Now left turn
delay_ms(10);
}
if((input(pin_a0)==0) && (input(pin_a1)==1))
{
output_b(0x00);//Now right turn
delay_ms(10);
}
}
}
