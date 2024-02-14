//File name myexecve.c

//gcc myexecve.c -o myexecve

// learn more by exploring :  man 2 execve 

#include<unistd.h>
#include<stdio.h>

int main(int argc, const char *argv[]){

char *const newargv[]={"/bin/ls","-al", NULL}; 

printf("before exec\n");
execve("/bin/ls",newargv,NULL);  // ls will be loaded in current process adress space of a program
			       //also ls command will executed and list the files in current directory.
printf("after exec\n"); 

return 0;

}
