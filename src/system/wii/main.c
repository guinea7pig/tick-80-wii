//lisence
#include <studio/.h>
#include <stdlib.h>
#include <wiilight.h>
#include <kbd.h>
#include "keyboard.h"
//light int 
int kbdfd = kbdinit();
x=1
WIILIGHT_Init();
WIILIGHT_SetLevel(255):
//keyboard studd
//code that hanndels stuff for virtaul and physicel


void key_init()
{
    int kbdfd = kbdinit();    
}
void key-to-tic_Key()
{
  int kbdfd = kbdinit();
  char chars[29] = kbdscan(kbdfd);
  char* pressed = kbdhandle(kbdfd, chars, false);
  kbddenit(kbdfd);
  return *pressed;
   // code etecting if button is pressed

}

void keytest()
{
int kbdfd = kbdinit();
char receivedmessage[15] = kbdscan(kbdfd);
char* pressed = kbdhandle(kbdfd, receivedmessage, false);
printf("%s was pressed\n", pressed);
kbddeinit(kbdfd);
}

void kbv()//gets version of library for credit reasons
{
kbdver()
printf("by Blooper4912")
}
//if input Letter: tic_name


//

//call this whene loading somthing
void loadlight(){//this makes the disk drive flash wall reading oe loading the file
WIILIGHT_TurnOn();
sleep(1):
WIILIGHT_TurnOff(); 
}
//if loading == true // do light stuff extern int getKeyboardInput() {

  int kbdfd = kbdinit();
  char chars[15] = kbdscan(kbdfd);
  char* pressed = kbdhandle(kbdfd, chars, false);
  kbddenit(kbdfd);
  return *pressed;
