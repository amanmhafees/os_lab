#include<stdio.h>
struct Process{
    int pid;
    int at;
    int bt;
    int ct;
    int tat;
    int wt;
}p[10],temp;
void main(){
    int n,i,j,min,time,total_tat,total_wt;
    printf("Enter the number of processes: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("\nEnter the process id: ");
        scanf("%d",&p[i].pid);
        printf("\nEnter the arrivat time and burst time");
        scanf("%d %d",&p[i].at,&p[i].bt);
    }
    printf("id\tat\tbt");
    for(i=0;i<n;i++){
        printf("%d\t%d\t%d\n",p[i].pid,p[i].at,p[i].bt);
    }
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(p[i].at>p[i+1].at){
                temp=p[i];
                p[i]=p[i+1];
                p[i+1]=temp;
            }
        }
    }
    time=0;
    for(i=0;i<n;i++){
        if(p[i].at<=time){
            p[i].ct=p[i].bt+time;
            p[i].tat=p[i].ct-p[i].at;
            p[i].wt=p[i].tat-p[i].bt;
            time=p[i].ct;
            total_tat=p[i].tat;
            total_wt=p[i].wt;
        }
    }
    printf("| id\t| at\t| bt\t| ct\t| tat\t| wt");
    printf("_______________________________________\n");
    for(i=0;i<n;i++){
        printf("%d\t| %d\t| %d\t| %d\t| %d\t| %d\n",p[i].pid,p[i].at,p[i].bt,p[i].ct,p[i].tat,p[i].wt);
        printf("________________________________________\n");
    }
}
