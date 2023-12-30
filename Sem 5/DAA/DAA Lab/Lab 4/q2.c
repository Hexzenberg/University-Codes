// Menu driven quick sort
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void swap(int a, int b)
{
    int t = a;
    a = b;
    b = t;
}

int partition(int *a, int l, int h, int *c)
{
    int pivot = a[h], i = l - 1;
    for (int j = l; j <= h - 1; j++)
    {
        (*c)++;
        if (a[j] <= pivot)
        {
            i++;
            swap(a[i], a[j]);
        }
    }
    swap(a[i + 1], a[h]);
    return i + 1;
}

void quickSort(int *a, int l, int h, int *c)
{
    if (l < h)
    {
        int pi = partition(a, l, h, c);
        quickSort(a, l, pi - 1, c);
        quickSort(a, pi + 1, h, c);
    }
}

void displayArray(int *a, int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}

int main()
{
    int option;
    do
    {
        printf("MAIN MENU (QUICK SORT)\n1. Ascending Data\n2. Descending Data\n3. Random Data\n4. Exit\nEnter option: ");
        scanf("%d", &option);
        if (option >= 1 && option <= 3)
        {
            char inputFileName[20], outputFileName[20];
            if (option == 1)
            {
                strcpy(inputFileName, "inAsce.dat");
                strcpy(outputFileName, "outQuickAsce.dat");
            }
            else if (option == 2)
            {
                strcpy(inputFileName, "inDesc.dat");
                strcpy(outputFileName, "outQuickDesc.dat");
            }
            else if (option == 3)
            {
                strcpy(inputFileName, "inRand.dat");
                strcpy(outputFileName, "outQuickRand.dat");
            }
            FILE *inputFile = fopen(inputFileName, "r");
            int n, c = 0;
            clock_t st, et;
            fscanf(inputFile, "%d", &n);
            int a[n];
            for (int i = 0; i < n; i++)
                fscanf(inputFile, "%d", &a[i]);
            fclose(inputFile);
            printf("Before Sorting:\n");
            displayArray(a, n);
            st = clock();
            quickSort(a, 0, n - 1, &c);
            et = clock();
            FILE *outputFile = fopen(outputFileName, "w");
            for (int i = 0; i < n; i++)
                fprintf(outputFile, "%d ", a[i]);
            fclose(outputFile);
            printf("After Sorting:\n");
            displayArray(a, n);
            printf("Number of comparisons: %d\nExecution time: %1f nanoseconds\n", c, ((double)(et - st) / CLOCKS_PER_SEC) * 1e9);
            int avgcase = (c <= 2 * n * n) ? 1 : 0;
            printf("\nScenario: %s-case\n", (avgcase) ? "Best" : "Worst");
        }
        else if (option != 4)
            printf("Invalid option. Please try again.\n");
    } while (option != 4);
    printf("The program is being terminated.\n");
    return 0;
}