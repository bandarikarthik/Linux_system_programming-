/*
This file has write system call functinality it will print the text to terminal 
*/

#include <unistd.h>

int main(int argc, char* argv[]){

unsigned int  fd = 1;  //value 1 file descriptor,output to shell/terminal
char *buffer = "\"write system call\"\r\n";
int i,size;

for(i=0;buffer[i]!='\0';i++,size++); 
  
write(fd,buffer,size);      //prints buffer string to shell/terminal

return 0;

}
