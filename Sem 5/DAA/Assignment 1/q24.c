// C Program to Print the Alternate Nodes in a Linked List using Recursion
#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int a;
    struct node *next;
} sn;
void disp(sn *h, int *a)
{
    if (h != NULL)
    {
        if ((*a) == 0)
        {
            printf("%d ", h->a);
            (*a) = 1;
            disp(h->next, a);
        }
        else
        {
            (*a) = 0;
            disp(h->next, a);
        }
    }
}
int main()
{
    sn *h = NULL, *l = h;
    int n, a = 0;
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
    printf("The alternate nodes of the entered linked list are: ");
    disp(h, &a);
    return 0;
}