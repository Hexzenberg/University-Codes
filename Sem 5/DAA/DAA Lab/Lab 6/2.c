#include <stdio.h>
#include <stdlib.h>
typedef struct SYMBOL
{
    int freq;
    char alphabet;
    struct SYMBOL *left;
    struct SYMBOL *right;
} sym;
void swap(sym *x, sym *y)
{
    sym temp = *x;
    *x = *y;
    *y = temp;
}
void minHeapify(sym *arr, int n, int i)
{
    int lt = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    if (left < n && arr[left].freq < arr[lt].freq)
        lt = left;
    if (right < n && arr[right].freq < arr[lt].freq)
        lt = right;
    if (lt != i)
    {
        swap(&arr[i], &arr[lt]);
        minHeapify(arr, n, lt);
    }
}
void buildMinHeap(sym *arr, int n)
{
    for (int i = (n - 1) / 2; i >= 0; i--)
        minHeapify(arr, n, i);
}
sym extractMin(sym *arr, int *n)
{
    sym min = arr[0];
    arr[0] = arr[*n - 1];
    (*n)--;
    minHeapify(arr, *n, 0);
    return min;
}
sym buildHuffmanTree(sym *arr, int n)
{
    while (n > 1)
    {
        sym *left = (sym *)malloc(sizeof(sym));
        sym *right = (sym *)malloc(sizeof(sym));
        *left = extractMin(arr, &n);
        *right = extractMin(arr, &n);
        sym node;
        node.freq = left->freq + right->freq;
        node.alphabet = '*';
        node.left = left;
        node.right = right;
        arr[n++] = node;
        buildMinHeap(arr, n);
    }
    return arr[0];
}
void inOrderTraversal(sym *root)
{
    if (root)
    {
        inOrderTraversal(root->left);
        if (root->alphabet != '*')
            printf("%c ", root->alphabet);
        inOrderTraversal(root->right);
    }
}
int main()
{
    int n;
    printf("Enter the number of alphabets:\n");
    scanf("%d", &n);
    sym a[n];
    printf("Enter the alphabets and their respective frequencies:\n");
    for (int i = 0; i < n; i++)
    {
        scanf(" %c%d", &a[i].alphabet, &a[i].freq);
        a[i].left = NULL;
        a[i].right = NULL;
    }
    buildMinHeap(a, n);
    sym huffmanTree = buildHuffmanTree(a, n);
    printf("In-order traversal of the Huffman tree (Huffman encoding):\n");
    inOrderTraversal(&huffmanTree);
    return 0;
}
