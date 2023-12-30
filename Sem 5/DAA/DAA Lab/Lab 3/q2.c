// WAP a menu driven program to sort a given list of elements in ascending order by insertion sort.
#include <stdio.h>
#include <string.h>
void insertionSort(int *a, int n, int *c)
{
    for (int i = 1; i < n; i++)
    {
        int k = a[i], j = i - 1;
        while (j >= 0 && a[j] > k)
        {
            a[j + 1] = a[j];
            j--;
            (*c)++;
        }
        a[j + 1] = k;
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
        printf("MAIN MENU (INSERTION SORT)\n1. Ascending Data\n2. Descending Data\n3. Random Data\n4. Exit\nEnter option: ");
        scanf("%d", &option);
        if (option >= 1 && option <= 3)
        {
            char inputFileName[20], outputFileName[20];
            if (option == 1)
            {
                strcpy(inputFileName, "inAsce.dat");
                strcpy(outputFileName, "outInsAsce.dat");
            }
            else if (option == 2)
            {
                strcpy(inputFileName, "inDesc.dat");
                strcpy(outputFileName, "outInsDesc.dat");
            }
            else if (option == 3)
            {
                strcpy(inputFileName, "inRand.dat");
                strcpy(outputFileName, "outInsRand.dat");
            }
            FILE *inputFile = fopen(inputFileName, "r");
            if (inputFile == NULL)
            {
                printf("Error opening input file.\n");
                return 1;
            }
            int n, c = 0;
            fscanf(inputFile, "%d", &n);
            int a[n];
            for (int i = 0; i < n; i++)
                fscanf(inputFile, "%d", &a[i]);
            fclose(inputFile);
            printf("Before Sorting: ");
            displayArray(a, n);
            insertionSort(a, n, &c);
            FILE *outputFile = fopen(outputFileName, "w");
            if (outputFile == NULL)
            {
                printf("Error opening output file.\n");
                return 1;
            }
            for (int i = 0; i < n; i++)
                fprintf(outputFile, "%d ", a[i]);
            fclose(outputFile);
            printf("After Sorting: ");
            displayArray(a, n);
            printf("Number of comparisons: %d\nSenario:\n", c);
            printf(c == 0 ? "Best Case\n" : c == ((n * (n - 1)) / 2) ? "Worst Case\n"
                                                                     : "Average Case\n");
        }
        else if (option != 4)
            printf("Invalid option. Please try again.\n");
    } while (option != 4);
    printf("Program has been terminated.");
    return 0;
}