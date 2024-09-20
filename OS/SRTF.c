#include<stdio.h>

int main() {
    int n, i, j, temp, burst_time[10], arrival_time[10], tat[10], rt[10], ct[10], wt[10];

    printf("Enter the number of processes: ");
    scanf("%d", &n);

    printf("Enter the arrival time and burst time of each process:\n");
    for(i=0; i<n; i++) {
        printf("Process %d:\n", i+1);
        printf("Arrival Time: ");
        scanf("%d", &arrival_time[i]);
        printf("Burst Time: ");
        scanf("%d", &burst_time[i]);
    }

    // Initialize remaining burst time array
    int remaining_burst_time[10];
    for(i=0; i<n; i++) {
        remaining_burst_time[i] = burst_time[i];
    }

    // Initialize current time
    int current_time = 0;

    // Initialize completion time array
    for(i=0; i<n; i++) {
        ct[i] = 0;
    }

    // SRTF scheduling
    while(1) {
        int min_index = -1, min_burst_time = 10000;
        for(i=0; i<n; i++) {
            if(arrival_time[i] <= current_time && remaining_burst_time[i] > 0 && remaining_burst_time[i] < min_burst_time) {
                min_index = i;
                min_burst_time = remaining_burst_time[i];
            }
        }
        if(min_index == -1)
            break;
        current_time++;
        remaining_burst_time[min_index]--;
        if(remaining_burst_time[min_index] == 0) {
            ct[min_index] = current_time;
        }
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
    printf("Process\tArrival Time\tBurst Time\tCT\tTAT\tRT\tWT\n");
    for(i=0; i<n; i++) {
        printf("P%d\t%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\n", i+1, arrival_time[i], burst_time[i], ct[i], tat[i], rt[i], wt[i]);
    }

    return 0;
}