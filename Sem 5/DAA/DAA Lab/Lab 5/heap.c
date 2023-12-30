// 30/8/23
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
struct person
{
    int id;
    char *name;
    int age;
    int height;
    int weight;
};
void swap(struct person *a, struct person *b)
{
    struct person temp = *a;
    *a = *b;
    *b = temp;
}
void maxheapify(struct person a[], int n, int i)
{
    int lc = 2 * i + 1;
    int rc = 2 * i + 2;
    int max = i;
    if (lc < n && a[lc].weight > a[max].weight)
        max = lc;
    if (rc < n && a[rc].weight > a[max].weight)
        max = rc;
    if (i != max)
    {
        swap(&a[max], &a[i]);
        maxheapify(a, n, max);
    }
}
void minheapify(struct person a[], int n, int i)
{
    int lc = 2 * i + 1;
    int rc = 2 * i + 2;
    int min = i;
    if (lc < n && a[lc].age < a[i].age)
        min = lc;
    if (rc < n && a[rc].age < a[i].age)
        min = rc;
    if (i != min)
    {
        minheapify(a, n, min);
        swap(&a[min], &a[i]);
    }
}
void buildheapmin(struct person a[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
        minheapify(a, n, i);
}
void buildheapmax(struct person a[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
        maxheapify(a, n, i);
}
void heapsortmax(struct person a[], int n)
{
    while (n > 1)
    {
        maxheapify(a, n, 0);
        swap(&a[0], &a[n - 1]);
        n--;
    }
}
void heapsortmin(struct person a[], int n)
{
    while (n > 1)
    {
        minheapify(a, n, 0);
        swap(&a[0], &a[n - 1]);
        n--;
    }
}
int main()
{
    int option;
    int n = 0; // Number of students
    struct person *p = malloc(sizeof(struct person));
    printf("Taking the inputs from the file:");
    FILE *file = fopen("students.txt", "r");
    if (file == NULL)
    {
        printf("\nError opening file!\n");
        return 1;
    }
    while (fscanf(file, "%d", &p[n].id) != EOF)
    {
        char c[100];
        // format specifier %99[^0-9] reads characters until it encounters a digit. This ensures that only the alphabetic characters of the name are captured.
        fscanf(file, " %99[^0-9] %d %d %d", c, &p[n].age, &p[n].height, &p[n].weight);
        p[n].name = strdup(c);
        n++;
        p = realloc(p, (n + 1) * sizeof(struct person));
    }
    fclose(file);
    do
    {
        printf("\nMAIN MENU (HEAP)\n");
        printf("1. Read data from the file\n");
        printf("2. Create a Min-heap based on the age\n");
        printf("3. Create a max heap based on the weight\n");
        printf("4. Display weight of the youngest person\n");
        printf("5. Insert a new person into the minheap\n");
        printf("6. Delete the oldest person\n");
        printf("7. Exit\n");
        printf("Enter your option: ");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            printf("Id\t\tName\t\t\tAge\t\tHeight\t\tWeight\n");
            for (int i = 0; i < n; i++)
                printf("%d\t\t%s\t\t%d\t\t%d\t\t%d\n", p[i].id, p[i].name, p[i].age, p[i].height, p[i].weight);
            break;
        case 2:
            buildheapmin(p, n);
            heapsortmin(p, n);
            break;
        case 3:
            buildheapmax(p, n);
            heapsortmax(p, n);
            break;
        case 4:
            buildheapmin(p, n);
            heapsortmin(p, n);
            printf("Weight of the youngest person: %.2f kg\n", p[n - 1].weight / 2.2046);
            break;
        case 5:
        {
            struct person newPerson;
            printf("Enter id: ");
            scanf("%d", &newPerson.id);
            printf("Enter name: ");
            char c[100];
            scanf("%s", c);
            newPerson.name = strdup(c);
            printf("Enter age: ");
            scanf("%d", &newPerson.age);
            printf("Enter height: ");
            scanf("%d", &newPerson.height);
            printf("Enter weight: ");
            scanf("%d", &newPerson.weight);
            n++;
            p = realloc(p, n * sizeof(struct person));
            p[n - 1] = newPerson;
            buildheapmin(p, n);
            heapsortmin(p, n);
            break;
        }
        case 6:
            buildheapmin(p, n);
            heapsortmin(p, n);
            printf("Deleting the oldest person:\n");
            printf("Id: %d\tName: %s\tAge: %d\tHeight: %d\tWeight: %d\n",
                   p[0].id, p[0].name, p[0].age, p[0].height, p[0].weight);
            for (int i = 1; i < n; i++)
                p[i - 1] = p[i];
            n--;
            break;
        default:
            printf("Exiting the program.\n");
            break;
        }
    } while (option != 7);
    for (int i = 0; i < n; i++)
        free(p[i].name);
    free(p);
    return 0;
}