#include<stdio.h>
#include<stdlib.h>

int n;
int A[20][2];
int getprocess(){
    int pro;
    printf("Enter the sie of the process : ");
    scanf("%d",&pro);
    return pro;
}
void print(){
    int i;
    for(i=0;i<n;i++){
        printf("|%d l %d |",A[i][0],A[i][1]);
    }
    printf("\n");
}
void firstfit(){
    int pro,i;
    int flag=0;
    pro=getprocess();
    for(i=0;i<n;i++){
        if(A[i][0]>=pro){
            A[i][1]=A[i][1]+pro;
            A[i][0]=A[i][0]-pro;
            printf("The process has been allocated to the memmory block %d\n",i+1);
            flag=1;
            break;
        }
    }
    if(flag==0){
        printf("The process cannot be allocated \n");
    }
}
void bestfit(){
    int i,pro,flag=0,min=0;
    pro=getprocess();
    for(i=0;i<n;i++){
        if(A[i][0]>=pro && A[i][0]<A[min][0]){
            min=i;
        }
    }
    if(A[min][0]>=pro){
        A[min][0]=A[min][0]-pro;
        A[min][1]=A[min][1]+pro;
        printf("The process has been allocated to the memmory block %d\n",min+1);
    }
    else{
        printf("The process cannot be allocated \n");
    }
}
void worstfit(){
    int max=0,i;
    int pro=getprocess();
    for(i=0;i<n;i++){
        if(A[i][0]>=A[max][0]){
            max=i;
        }
    }
    if(A[max][0]>=pro){
        A[max][0]=A[max][0]-pro;
        A[max][1]=A[max][1]+pro;
        printf("The process has been allocated to the memmory block %d\n",max+1);
    }
    else{
        printf("The process cannot be allocated \n");
    }
}

int main(){
    int i,j;
    printf("Enter the number of memmory blocks");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter the sie of memmory block %d : ",i+1);
        scanf("%d",&A[i][0]);
        A[i][1]=0;
    }
    for(i=0;i<n;i++){
        printf("|%d l %d |",A[i][0],A[i][1]);
    }
    printf("\n");
    while(1){
    printf("Your Choices are :\n1.First Fit\n2.Best Fit\n3.Worst Fit\n4.Exit\nEnter your choice : ");
    scanf("%d",&j);
    switch(j){
        case 1:
            firstfit();
            print();
            break;
        case 2:
            bestfit();
            print();
            break;
        case 3:
            worstfit();
            print();
            break;
        default:
            exit(0);
    }
    }
}
