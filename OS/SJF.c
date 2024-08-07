#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter the number of processes: ");
    scanf("%d", &n);

    int arrival_time[n], burst_time[n], waiting_time[n], turnaround_time[n], completion_time[n], response_time[n];

    for (i = 0; i < n; i++) {
        printf("Enter arrival time for process %d: ", i + 1);
        scanf("%d", &arrival_time[i]);
        printf("Enter burst time for process %d: ", i + 1);
        scanf("%d", &burst_time[i]);
    }



   int current_time = arrival_time[0];
    waiting_time[0] = 0;
    turnaround_time[0] = burst_time[0];
    completion_time[0] = current_time + burst_time[0];
    response_time[0] = current_time - arrival_time[0];

    for (i = 1; i < n; i++) {
        current_time = completion_time[i - 1];
        waiting_time[i] = current_time - arrival_time[i];
        if (waiting_time[i] < 0) waiting_time[i] = 0;
        turnaround_time[i] = waiting_time[i] + burst_time[i];
        completion_time[i] = current_time + burst_time[i];
        response_time[i] = current_time - arrival_time[i];
    }

    printf("Process\tArrival Time\tBurst Time\tWaiting Time\tTurnaround Time\tCompletion Time\tResponse Time\n");
    for (i = 0; i < n; i++) {
        printf("%d\t%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\n", i + 1, arrival_time[i], burst_time[i], waiting_time[i], turnaround_time[i], completion_time[i], response_time[i]);
    }

    return 0;
}