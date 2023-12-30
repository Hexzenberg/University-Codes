// 16/08/23
// WAP to make a menu driven merge sort
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void merge(int *a, int l, int m, int h, int *c)
{
    int size = (h - l) + 1, b[size], i = l, j = m + 1, k = 0;
    while (i <= m && j <= h)
    {
        (*c)++;
        if (a[i] < a[j])
            b[k++] = a[i++];
        else
            b[k++] = a[j++];
    }
    while (i <= m)
        b[k++] = a[i++];
    while (j <= h)
        b[k++] = a[j++];
    for (k = 0; k < size; k++)
        a[l + k] = b[k];
}

void mergeSort(int *a, int l, int r, int *c)
{
    if (l < r)
    {
        int m = (l + r) / 2;
        mergeSort(a, l, m, c);
        mergeSort(a, m + 1, r, c);
        merge(a, l, m, r, c);
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
        printf("MAIN MENU (MERGE SORT)\n1. Ascending Data\n2. Descending Data\n3. Random Data\n4. Exit\nEnter option: ");
        scanf("%d", &option);
        if (option >= 1 && option <= 3)
        {
            char inputFileName[20], outputFileName[20];
            if (option == 1)
            {
                strcpy(inputFileName, "inAsce.dat");
                strcpy(outputFileName, "outMergeAsce.dat");
            }
            else if (option == 2)
            {
                strcpy(inputFileName, "inDesc.dat");
                strcpy(outputFileName, "outMergeDesc.dat");
            }
            else if (option == 3)
            {
                strcpy(inputFileName, "inRand.dat");
                strcpy(outputFileName, "outMergeRand.dat");
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
            mergeSort(a, 0, n - 1, &c);
            et = clock();
            FILE *outputFile = fopen(outputFileName, "w");
            for (int i = 0; i < n; i++)
                fprintf(outputFile, "%d ", a[i]);
            fclose(outputFile);
            printf("After Sorting:\n");
            displayArray(a, n);
            printf("Number of comparisons: %d\nExecution time: %1f nanoseconds\n", c, ((double)(et - st) / CLOCKS_PER_SEC) * 1e9);
        }
        else if (option != 4)
            printf("Invalid option. Please try again.\n");
    } while (option != 4);
    printf("The program is being terminated.\n");
    return 0;
}