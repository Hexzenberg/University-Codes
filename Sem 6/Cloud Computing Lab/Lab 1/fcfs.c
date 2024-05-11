#include <stdio.h>

int main()
{
    int n, i, j;
    float avg_wt = 0, avg_tat = 0, ct = 0;

    printf("Enter the number of processes: ");
    scanf("%d", &n);

    int bt[n], at[n], tat[n], wt[n], ct_arr[n];

    printf("Enter the burst time and arrival time for each process:\n");
    for (i = 0; i < n; i++)
    {
        printf("Process %d: ", i + 1);
        scanf("%d %d", &bt[i], &at[i]);
    }

    // sort the processes by their arrival times
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (at[i] > at[j])
            {
                int temp = at[i];
                at[i] = at[j];
                at[j] = temp;

                temp = bt[i];
                bt[i] = bt[j];
                bt[j] = temp;
            }
        }
    }

    // calculate completion time, turnaround time and waiting time for each process
    for (i = 0; i < n; i++)
    {
        if (ct < at[i])
            ct = at[i];

        ct += bt[i];
        ct_arr[i] = ct;
        tat[i] = ct - at[i];
        wt[i] = tat[i] - bt[i];
        avg_tat += tat[i];
        avg_wt += wt[i];
    }

    // print the results
    printf("\nProcess\tBurst Time\tArrival Time\tCompletion Time\tTurnaround Time\tWaiting Time\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\n", i + 1, bt[i], at[i], ct_arr[i], tat[i], wt[i]);
    }

    printf("\nAverage Turnaround Time: %.2f", avg_tat / n);
    printf("\nAverage Waiting Time: %.2f", avg_wt / n);

    return 0;
}