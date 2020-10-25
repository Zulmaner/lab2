#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
int main (int argc, char **argv){
int pid;
switch (pid = fork()){
case 0:
printf ("I am the Child process: pid=%d\n",getpid());
break;
default:
printf("I am the parent procee: pid=%d, child pid=%d\n", getpid(), pid);
break;
case -1:
perror("fork");
exit(1);
break;
}
exit(0);
}
