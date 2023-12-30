// C Program find the Length of the Linked List using Recursion
#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int a;
    struct node *next;
} sn;
void len(sn *h, int *o)
{
    if (h != NULL)
    {
        (*o)++;
        len(h->next, o);
    }
}
int main()
{
    sn *h = NULL, *l = h;
    int n, o = 0;
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
    len(h, &o);
    printf("The length of the linked list is: %d", o);
    return 0;
}