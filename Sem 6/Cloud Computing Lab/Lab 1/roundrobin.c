#include <stdio.h>

int main()
{
    int n, i, quantum, count = 0, time = 0, remain;
    float avg_wt = 0, avg_tat = 0;

    printf("Enter the number of processes: ");
    scanf("%d", &n);

    int bt[n], at[n], ct[n], tat[n], wt[n], rembt[n];

    remain = n;

    printf("Enter the burst time and arrival time for each process:\n");
    for (i = 0; i < n; i++)
    {
        printf("Process %d: ", i + 1);
        scanf("%d %d", &bt[i], &at[i]);
        rembt[i] = bt[i];
    }

    printf("Enter time quantum: ");
    scanf("%d", &quantum);

    while (remain != 0)
    {
        for (i = 0; i < n; i++)
        {
            if (rembt[i] > 0)
            {
                if (rembt[i] <= quantum)
                {
                    time += rembt[i];
                    rembt[i] = 0;
                    tat[i] = time - at[i];
                    wt[i] = tat[i] - bt[i];
                    avg_tat += tat[i];
                    avg_wt += wt[i];
                    remain--;
                    ct[i] = time;
                }
                else
                {
                    time += quantum;
                    rembt[i] -= quantum;
                }
            }
        }
    }

    // print the results
    printf("\nProcess\tBurst Time\tArrival Time\tCompletion Time\tTurnaround Time\tWaiting Time\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\n", i + 1, bt[i], at[i], ct[i], tat[i], wt[i]);
    }

    printf("\nAverage Turnaround Time: %.2f", avg_tat / n);
    printf("\nAverage Waiting Time: %.2f", avg_wt / n);

    return 0;
}