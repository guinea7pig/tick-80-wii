//lisence
#include <studio/.h>
#include <stdlib.h>
#include <wiilight.h>
#include <kbd.h>
//whatever library we use 
void key_init()
//code that hanndels stuff for virtaul and physicel
char* kbdscan(int kbdfd);// scans for iputs figure out how to make this run on a loop
void key_init()
{
int kbdfd = kbdinit();    
}





void WIILIGHT_Init();//reapate this code muitlip times to scare the crap out of people
WIILIGHT_SetLevel(255)://we could also use this to indacate loading or put some morse code srcrets
WIILIGHT_TurnOn();
sleep(1):
WIILIGHT_TurnOff();