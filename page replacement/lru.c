#include<stdio.h>
void main(){
    int pg[100],fr[100],i,j,k=0,m,n,found,count=0;
    printf("Enter the number of pages: ");
    scanf("%d",&n);
    printf("Enter the  umber of frames: ");
    scanf("%d",&m);
    printf("Enter the pages: ");
    for(i=0;i<n;i++){
        scanf("%d",&pg[i]);
    }
    for(j=0;j<m;j++){
        fr[j]=-1;
    }