// C Program to Display the Nodes of a Linked List in Reverse using Recursion
#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int a;
    struct node *next;
} sn;
void rev(sn *h)
{
    if (h != NULL)
    {
        rev(h->next);
        printf("%d ", h->a);
    }
}
int main()
{
    sn *h = NULL, *l = h;
    int n;
    printf("Enter the number of elements in the linked list:\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int d;
        printf("Enter a value to insert:\n");
        scanf("%d", &d);
        sn *cur = malloc(sizeof(sn));
        cur->a = d;
        cur->next = NULL;
        ((h == NULL) ? h = l = cur : (l->next = cur, l = l->next));
    }
    printf("The entered linked list in reverse is: ");
    rev(h);
    return 0;
}