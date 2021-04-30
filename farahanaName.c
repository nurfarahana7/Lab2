#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main(void){
  for(int i = 0; i < 4; i++){
    pid_t pid = fork();

    if(pid == 0){

        char name[20];
        printf("Hi! What's your name?: \n");
        scanf("%s", name);
        printf("My name is: %s\n", name);
        exit(0);
  }
  else{
        wait(NULL);
  }
}
printf("Job is Done! :)\n");
return EXIT_SUCCESS;
}
