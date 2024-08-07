#include<stdio.h>
void main()
{
    int n,i,CT=0;
    float avg_WT=0,avg_RT=0;
    printf("Enter the number of process:- ");
    scanf("%d",&n);
    int AT[n],BT[n],TAT[n],WT[n],RT[n];
    for(i=0;i<n;i++)
    {
        printf("Give the Arrival Time and the Burst time of the process %d------\n",i+1);
        printf("Arrival Time =");
        scanf("%d",&AT[i]);
        printf("Burst Time =");
        scanf("%d",&BT[i]);
    }
    for(i=1;i<n;i++)
    {
        CT=CT+BT[i];
        TAT[i]=CT-AT[i];
        WT[i]=TAT[i]-BT[i];
        RT[i]=WT[i];
        avg_WT=avg_WT+WT[i];
        avg_RT=avg_RT+RT[i];
    }
    printf("PID\tAT\tBT\tTAT\tWT\tRT\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t%d\t%d\t%d\t%d\t%d\t\n",i+1,AT[i],BT[i],TAT[i],WT[i],RT[i]);
    }
    printf("Average Waiting Time is =%f\n",avg_WT/n);
    printf("Average Response Time is =%f\n",avg_RT/n);
}