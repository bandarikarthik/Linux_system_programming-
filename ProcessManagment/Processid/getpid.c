#include<sys/types.h>
#include<unistd.h>
#include<stdio.h>

int main(int argc,char* argv[]){


pid_t Processid = getpid();
printf("%d\n",Processid);
return 0;

}
