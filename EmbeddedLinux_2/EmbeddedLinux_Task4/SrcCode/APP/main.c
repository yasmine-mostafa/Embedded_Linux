#include "DIO.h"
#include "Port.h"

int main()
{
  PORT_voidInit();
  
  while(1)
  {
    DIO_enumSetPin(DIO_enumPortA,DIO_enumPin0,DIO_enumLogicHigh);
    DIO_enumSetPin(DIO_enumPortA,DIO_enumPin1,DIO_enumLogicLow);
    DIO_DelayTimeMS(500);
    DIO_enumSetPin(DIO_enumPortA,DIO_enumPin0,DIO_enumLogicLow);
    DIO_enumSetPin(DIO_enumPortA,DIO_enumPin1,DIO_enumLogicHigh);
    DIO_DelayTimeMS(500);
    
  }	
 return 0;
}
