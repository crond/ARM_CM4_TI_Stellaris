/* 
*  TI_ Stellaris - LMF120
* Steps to Blink lED;
* 1. Enable POWER to the PIN/PORT
* 2. Set the direction
* 3. Set the  concern bits [in concern port] in Digital Enable Register
* 4. Set 1 to glow, 0 to turn-off LED in concern bits [in concern port] 
*/

int delay()
{
    long int i,l;
    for(l=0;l<15;l++)
        for(i=0;i<65000;i++);
            
               
    return 0;
}
#if 1
int main()
{
  
  //Enabling power to PORT-F, in which RGB LED is connected
  *((unsigned int*)0x400fe608u) = 0x20u;
  
  //setting Direction for PORT-F, bins 1,2,3
  //base: 0x40025000 ; offset = 0x400
  *((unsigned int*)0x40025400u) = 0x0eu;
  
  //setting GPIODEN, Digital Enable reg, for PORT-F, bins 1,2,3
  //base: 0x40025000 ; offset = 0x51c
  *((unsigned int*)0x4002551cu) = 0x0eu;
  while(1)
  {
    *((unsigned int*)0x400253fcu) = 0x02u;
    delay();
    
    *((unsigned int*)0x400253fcu) = 0x00u;
   delay();
    
     *((unsigned int*)0x400253fcu) = 0x04u;
    delay();
    *((unsigned int*)0x400253fcu) = 0x00u;
    delay();
    
    
     *((unsigned int*)0x400253fcu) = 0x08u;
   delay();
    *((unsigned int*)0x400253fcu) = 0x00u;
    delay();
  }
  return 0;
}
#endif


