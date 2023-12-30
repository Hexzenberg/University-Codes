/* 23.11.21 Q5- Display the pattern on the screen.

    1        1
   222      222
  33333    33333
 4444444  4444444
555555555555555555
 4444444  4444444
  33333    33333
   222      222
    1        1*/

    #include <stdio.h>

int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    int sp=n-1,x=1,c=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=sp;j++)
        printf(" ");
        for(int j=1;j<=c;j++)
        printf("%d",x);
        for(int j=1;j<=sp;j++)
        printf("  ");
        for(int j=1;j<=c;j++)
        printf("%d",x);
        printf("\n");
        sp--;x++;c=c+2;
    }
    x=x-2;sp=1;c=c-4;
    for(int i=(n-1);i>=1;i--)
    {
        for(int j=1;j<=sp;j++)
        printf(" ");
        for(int j=1;j<=c;j++)
        printf("%d",x);
        for(int j=1;j<=sp;j++)
        printf("  ");
        for(int j=1;j<=c;j++)
        printf("%d",x);
        printf("\n");
        sp++;x--;c=c-2;
    }
}
