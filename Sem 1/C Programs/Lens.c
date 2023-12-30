/* 10.11.21 Q4  WAP to display the position, size, and type of image formed by a concave mirrior*/

#include<stdio.h>
int main()
{
    int pos;
    printf("enter pos of object\n\n 1:at infinity\t2:beyond centre of curvature c\t3:at the centre of curvature c\t4:between c and f\t5:at focus f : ");
    scanf("%d",&pos);
    if(pos==1)
    {
        printf("position: at focus f \n\n\nsize of image: highly diminished \n\n\nnature of image: real and inverted\n");
    }
    if(pos==2)
    {
        printf("position: between f and c \n\n\nsize of image: diminished \n\n\nnature of image: real and inverted\n");
    }
    if(pos==3)
    {
        printf("position: at c \n\n\nsize of image: same size \n\n\nnature of image: real and inverted\n");
    }
    if(pos==4)
    {
        printf("position: beyond c \n\n\nsize of image: enlarged \n\n\nnature of image: real and inverted\n");
    }
    if(pos==5)
    {
        printf("position: at infinity \n\n\nsize of image: highly enlarged \n\n\nnature of image: real and inverted\n");
    }
    return 0;
}

