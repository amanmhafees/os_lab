#include<stdio.h>
#include<dirent.h>
#include<stdlib.h>
struct dirent *dptr;
void main(){
    char buff[256];
    DIR *d;
    printf("Enter the name of the directory: ");
    scanf("%s",buff);
    if((d=opendir(buff))==NULL){
        printf("Error");
        exit(1);
    }
    while(dptr=readdir(d)){
        printf("%s\n",dptr->d_name);
    }
    closedir(d);
    
}