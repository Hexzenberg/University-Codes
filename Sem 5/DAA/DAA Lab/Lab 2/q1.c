// 2/8/23
#include <stdio.h>
#include <stdlib.h>

void decimalToBinary(int decimal, FILE *outputFile)
{
    if (decimal == 0)
        return;
    decimalToBinary(decimal / 2, outputFile);
    fprintf(outputFile, "%d", decimal % 2);
}

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        printf("Usage:%s<n><input.file><output.file>\n", argv[0]);
        return 1;
    }
    int n = atoi(argv[1]);
    if (n <= 0)
    {
        printf("Invalid input of n: %d\n", n);
        return 1;
    }
    FILE *inputFile = fopen(argv[2], "r");
    if (inputFile == NULL)
    {
        printf("Error in opening the input file\n");
        return 1;
    }
    FILE *outputFile = fopen(argv[3], "w");
    if (outputFile == NULL)
    {
        printf("Error in opening the output file\n");
        return 1;
    }
    int decimalNumber;
    while (n > 0 && fscanf(inputFile, "%d", &decimalNumber) == 1)
    {
        fprintf(outputFile, "The binary equivalent of %d is: ", decimalNumber);
        decimalToBinary(decimalNumber, outputFile);
        fprintf(outputFile, "\n");
        n--;
    }
    fclose(inputFile), fclose(outputFile);
    return 0;
}