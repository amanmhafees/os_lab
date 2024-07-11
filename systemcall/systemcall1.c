#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/wait.h>
void main(){
    int pid;
    pid=fork();
    //pid negative means fork failed
    if(pid<0){
        printf("Fork Failed\n");
        exit(1);
    }
    //pid zero means child process created
    else if(pid==0){
        //to execute child process
        execlp("/bin/date","date",NULL);  //create a process by replacing previous process
        printf("Child PID: %d\n",getpid());
        exit(0);
    }
    //pid positive means parent process that value is the process id of the newly created process
    else{
        printf("Parent PID: %d\n",getpid());
        wait(NULL);//wait for child process to terminate
        exit(0);
    }
    return 0;

}