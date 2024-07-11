//to study on stat()

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/stat.h>

void main(){
    //pointer to start struct
    struct stat sfile;
    //stat system call
    stat("Hello.txt",&sfile);
    printf("st_mode=%o\n",sfile.st_mode);
    printf("File st uid=%d\n",sfile.st_uid);
    printf("st_size=%d\n",sfile.st_size);
}
