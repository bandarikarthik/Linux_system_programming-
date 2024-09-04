#include <sys/types.h>
#include <unistd.h>
#include<stdio.h>



int main(int argc, const char *argv[]){

pid_t id;

int a=5,b=10;

id = fork();
	
if(id == 0) { //child process

	printf("child %d\n",a);
	printf("child %d\n",b);

	}
	else{  //parrent process

	printf("parrent  %d\n",a);
	printf("parrent  %d\n",b);


	}



}
