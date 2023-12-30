// C Program to Reverse a Stack using Recursion
#include <stdio.h>
#define MAX 100
typedef struct stack
{
    int a[MAX], top;
} st;
void push(st *ob, int d)
{
    if (ob->top < MAX)
    {
        ob->a[++ob->top] = d;
    }
}
void pop(st *ob, int *k)
{
    if (ob->top > -1)
        *k = ob->a[ob->top--];
}
void rev(st *ob)
{
    int k;
    if (ob->top > -1)
    {
        pop(ob, &k);
        printf("%d ", k);
        rev(ob);
        push(ob, k);
    }
}
int main()
{
    st ob;
    ob.top = -1;
    int n;
    printf("The number of elements you want in the stack(<=100 numbers):\n");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++)
    {
        int d;
        scanf("%d", &d);
        push(&ob, d);
    }
    printf("The elements in reverse is: ");
    rev(&ob);
    return 0;
}
