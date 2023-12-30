// 27/9/23
#include <stdio.h>
typedef struct item
{
    int itemno;
    double value, weight, unitprice, havetaken;
} item;
void swap(item *x, item *y)
{
    item t = *x;
    *x = *y;
    *y = t;
}
void heapify(item *a, int n, int i)
{
    int lt = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    if (left < n && a[left].unitprice < a[lt].unitprice)
        lt = left;
    if (right < n && a[right].unitprice < a[lt].unitprice)
        lt = right;
    if (lt != i)
    {
        swap(&a[i], &a[lt]);
        heapify(a, n, lt);
    }
}
void buildHeap(item *a, int n)
{
    for (int i = (n - 1) / 2; i >= 0; i--)
        heapify(a, n, i);
}
void heapSort(item *a, int n)
{
    buildHeap(a, n);
    while (n > 1)
    {
        swap(a, a + (--n));
        heapify(a, n, 0);
    }
}
void fks(item *a, int knapsack, int n, double *m)
{
    int i = 0;
    heapSort(a, n);
    for (int i = 0; i < n; i++)
    {
        if (a[i].weight <= knapsack)
        {
            *m += a[i].value;
            a[i].havetaken = 1;
            knapsack -= a[i].weight;
        }
        else
        {
            *m += ((knapsack / a[i].weight) * a[i].value);
            a[i].havetaken = knapsack / a[i].weight;
            knapsack = 0;
            break;
        }
    }
}
int main()
{
    int n, knapsack;
    double m = 0;
    printf("Enter the number of items present:\n");
    scanf("%d", &n);
    item a[n];
    printf("Enter the value(profit) and weight of each item:\n");
    for (int i = 0; i < n; i++)
    {
        a[i].itemno = i + 1;
        scanf("%lf%lf", &a[i].value, &a[i].weight);
        a[i].havetaken = 0;
        a[i].unitprice = a[i].value / a[i].weight;
    }
    printf("Enter the capacity of the knapsack:\n");
    scanf("%d", &knapsack);
    fks(a, knapsack, n, &m);
    printf("Item no\t\tProfit\t\tWeight\t\tAmount Taken\n");
    for (int i = 0; i < n; i++)
        printf("%d\t\t%lf\t%lf\t%lf\n", a[i].itemno, a[i].value, a[i].weight, a[i].havetaken);
    printf("Maximum Profit: %lf", m);
    return 0;
}
