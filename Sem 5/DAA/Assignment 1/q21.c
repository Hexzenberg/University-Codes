// C Program Count the Number of Occurrences of an Element in the Linked List using Recursion
#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int a;
    struct node *next;
} sn;
void occ(sn *h, int k, int *o)
{
    if (h != NULL)
    {
        if (h->a == k)
            (*o)++;
        occ(h->next, k, o);
    }
}
int main()
{
    sn *h = NULL, *l = h;
    int n, k, o = 0;
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
    printf("Enter the element to check its occurences:\n");
    scanf("%d", &k);
    occ(h, k, &o);
    printf("The number of occurences of %d is: %d", k, o);
    return 0;
}