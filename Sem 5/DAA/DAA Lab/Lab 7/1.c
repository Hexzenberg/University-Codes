// 4/10/23
#include <stdio.h>
#include <stdlib.h>
typedef struct activity
{
    int no, st, fn;
} act;
void swap(act *a, act *b)
{
    act t = *a;
    *a = *b;
    *b = t;
}
int partition(act *a, int l, int h)
{
    int pivot = a[h].fn, i = l - 1;
    for (int j = l; j <= h - 1; j++)
    {
        if (a[j].fn <= pivot)
        {
            i++;
            swap(&a[i], &a[j]);
        }
    }
    swap(&a[i + 1], &a[h]);
    return i + 1;
}
void quickSort(act *a, int l, int h)
{
    if (l < h)
    {
        int pi = partition(a, l, h);
        quickSort(a, l, pi - 1);
        quickSort(a, pi + 1, h);
    }
}
void maxActivities(act a[], int n)
{
    printf("Selected activities:\n");
    quickSort(a, 0, n - 1);
    int i = 0;
    printf("Activity 1 (Start time: %d, Finish time: %d)\n", a[i].st, a[i].fn);
    for (int j = 1; j < n; j++)
    {
        if (a[j].st >= a[i].fn)
        {
            printf("Activity %d (Start time: %d, Finish time: %d)\n", a[j].no, a[j].st, a[j].fn);
            i = j;
        }
    }
}
int main()
{
    int n;
    printf("Enter the number of activities: ");
    scanf("%d", &n);
    act a[n];
    printf("Enter the start and finish time of the activities:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &a[i].st, &a[i].fn);
        a[i].no = i + 1;
    }
    maxActivities(a, n);
    return 0;
}