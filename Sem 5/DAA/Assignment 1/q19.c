// C Program to reverse the Nodes of a Linked List in using Recursion
#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int a;
    struct node *next;
} sn;
sn *rev(sn *h)
{
    if (h == NULL || h->next == NULL)
        return h;
    sn *p = rev(h->next);
    h->next->next = h;
    h->next = NULL;
    return p;
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
    for (sn *p = rev(h); p != NULL; p = p->next)
        printf("%d ", p->a);
    return 0;
}