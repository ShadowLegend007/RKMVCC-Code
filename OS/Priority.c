#include<stdio.h>

int main() {
    int n, i, j, temp, priority[10], burst_time[10], arrival_time[10], tat[10], rt[10], ct[10], wt[10];

    printf("Enter the number of processes: ");
    scanf("%d", &n);

    printf("Enter the arrival time, burst time and priority of each process:\n");
    for(i=0; i<n; i++) {
        printf("Process %d:\n", i+1);
        printf("Arrival Time: ");
        scanf("%d", &arrival_time[i]);
        printf("Burst Time: ");
        scanf("%d", &burst_time[i]);
        printf("Priority: ");
        scanf("%d", &priority[i]);
    }

    // Sorting based on priority
    for(i=0; i<n; i++) {
        for(j=i+1; j<n; j++) {
            if(priority[i] < priority[j]) {
                temp = arrival_time[i];
                arrival_time[i] = arrival_time[j];
                arrival_time[j] = temp;

                temp = burst_time[i];
                burst_time[i] = burst_time[j];
                burst_time[j] = temp;

                temp = priority[i];
                priority[i] = priority[j];
                priority[j] = temp;
            }
        }
    }

    // Calculate Completion Time (CT)
    ct[0] = burst_time[0];
    for(i=1; i<n; i++) {
        ct[i] = ct[i-1] + burst_time[i];
    }

    // Calculate Waiting Time (WT)
    wt[0] = 0;
    for(i=1; i<n; i++) {
        wt[i] = ct[i-1] - arrival_time[i];
        if(wt[i] < 0)
            wt[i] = 0;
    }

    // Calculate Turn Around Time (TAT) and Response Time (RT)
    for(i=0; i<n; i++) {
        tat[i] = ct[i] - arrival_time[i];
        rt[i] = tat[i] - burst_time[i];
    }

    // Print the results
    printf("Process\tArrival Time\tBurst Time\tPriority\tCT\tTAT\tRT\tWT\n");
    for(i=0; i<n; i++) {
        printf("P%d\t%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\n", i+1, arrival_time[i], burst_time[i], priority[i], ct[i], tat[i], rt[i], wt[i]);
    }

    return 0;
}