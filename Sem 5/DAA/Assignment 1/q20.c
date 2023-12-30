// C Program to Display all the Nodes in a Linked List using Recursion
#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int a;
    struct node *next;
} sn;
void disp(sn *h)
{
    if (h != NULL)
    {
        printf("%d ", h->a);
        disp(h->next);
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
    printf("The entered linked list is: ");
    disp(h);
    return 0;
}