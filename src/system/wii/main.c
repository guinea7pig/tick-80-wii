//lisence
#include <studio/.h>
#include <stdlib.h>
#include <wiilight.h>
#include <kbd.h>
//light int 
WIILIGHT_Init();
WIILIGHT_SetLevel(255):
//keyboard studd
void key_init()
//code that hanndels stuff for virtaul and physicel
char* kbdscan(int kbdfd);// scans for iputs figure out how to make this run on a loop
void key_init()
{
    int kbdfd = kbdinit();    
}

void keytest()
{

}

void kbv()//gets version of library for credit reasons
{
kbdver()
}
//if input Letter: tic_name


//

//call this whene loading somthing
void loadlight(){//this makes the disk drive flash wall reading oe loading the file
WIILIGHT_TurnOn();
sleep(1):
WIILIGHT_TurnOff(); 
}
//if loading == true // do light stuff 
