/*
* Steps to Blink lED;
* 1. Enable POWER to the PIN/PORT
* 2. 
*/

int delay()
{
    long int i,l;
    for(l=0;l<15;l++)
        for(i=0;i<65000;i++);
            
               
    return 0;
}
int main()
{
  
  *((unsigned int*)0x400fe608u) = 0x20u;
  *((unsigned int*)0x40025400u) = 0x0eu;
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
