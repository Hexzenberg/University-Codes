/* 23.11.21 Q4- display the pattern on the screen

$        $        $
$$       $$       $$
$$$      $$$      $$$
$$$$     $$$$     $$$$
$$$$$    $$$$$    $$$$$
$$$$$$   $$$$$$   $$$$$$
$$$$$$$  $$$$$$$  $$$$$$$
$$$$$$$$ $$$$$$$$ $$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$ $$$$$$$$ $$$$$$$$
$$$$$$$  $$$$$$$  $$$$$$$
$$$$$$   $$$$$$   $$$$$$
$$$$$    $$$$$    $$$$$
$$$$     $$$$     $$$$
$$$      $$$      $$$
$$       $$       $$
$        $        $*/


#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of lines : ");
    scanf("%d",&n);
    int sp=n-1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        printf("$");
        for(int j=1;j<=sp;j++)
        printf(" ");
        for(int j=1;j<=i;j++)
        printf("$");
        for(int j=1;j<=sp;j++)
        printf(" ");
        for(int j=1;j<=i;j++)
        printf("$");
        sp--;
        printf("\n");
    }
    sp=1;
    for(int i=(n-1);i>0;i--)
    {
        for(int j=i;j>=1;j--)
        printf("$");
        for(int j=1;j<=sp;j++)
        printf(" ");
        for(int j=i;j>=1;j--)
        printf("$");
        for(int j=1;j<=sp;j++)
        printf(" ");
        for(int j=i;j>=1;j--)
        printf("$");
        sp++;
        printf("\n");
    }
}
