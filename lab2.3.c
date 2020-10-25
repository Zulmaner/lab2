#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

void childTask() {
	printf("salam, saya anak tau\n");
}
void parentTask () {
	printf("Dan saya adalah Bapanya \n");
}
int main(void) {
  pid_t pid = fork ();
	if (pid == 0){
	  childTask();
	  exit(EXIT_SUCCESS);
	}
	else if(pid >0) {
          wait(NULL);
	  parentTask();
	}
	else {
	printf("Unable to can");
	}
return EXIT_SUCCESS;
}
