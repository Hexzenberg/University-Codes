/* 16.11.21 Q1- WAP to declare grade of a student: First(>59), second (>49), third (>39), fail (<40); subjects: phy, chem, maths, eng, bio.*/
#include <stdio.h>

int main()
{
    int p, c, m, e, b, per;
    printf("Enter the marks of five subjects:");
    scanf("%d%d%d%d%d",&p,&c,&m,&e,&b);
    per=(int)(p+c+m+e+b+4.9)/5;

    if (per>=60)
    printf("First division");
    else{
        if(per>=50)
        printf("second division");
        else{
            if(per>=40)
            printf("Third division");
            else
            printf("Fail");
        }
    }

    return 0;
}