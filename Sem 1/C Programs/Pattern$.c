/* 23.11.21 Q2- Display the pattern in the screen.

    $        $
   $$$      $$$
  $$$$$    $$$$$
 $$$$$$$  $$$$$$$
$$$$$$$$$$$$$$$$$$*/


#include <stdio.h>

int main()
{
     int n,i,j,s,k;
    printf("enter the number of terms: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("\n");
        for(s=1;s<=n-i;s++)
            printf(" ");
        for(j=i;j>=1;j--)
            printf("$");
        for(k=1;k<=i-1;k++)
            printf("$");
        for(s=1;s<=2*(n-i);s++)
            printf(" ");
        for(j=i;j>=1;j--)
            printf("$");
        for(k=1;k<=i-1;k++)
            printf("$");

    }
    return 0;
}
