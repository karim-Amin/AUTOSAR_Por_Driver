#include "Port.h"
int main()
{
  Port_Init(&Port_Configuration);
  Port_SetPinMode(PORT_PINF1_INDEX,PORT_PIN_F1_MODE_U1CTS);
  
  return 0;
}
