/*Q3 09.11.21 WAP to display wheather the wheatstone bridge is balanced or not, if not find out value of the variabe resistance to balance the bridge.*/

#include <stdio.h>
int main()
{
   int p,q,r,s;
    printf("Enter value of p q r s:");
    scanf("%d %d %d %d", &p,&q,&r,&s);
    if(p*s == r*q)
    printf("Wheatstone bridge is balanced");
    else
    {
        s=(r*q)/p;
        printf("Req S resistance is: %.2d",s);
    }
}