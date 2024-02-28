#include <stdio.h>
#include <stdlib.h>

int linearSearch(int Search, int a[], int size)
{
    int k = 0;
    for (int i = 1; i <= size; a[i] == Search ? k++ : 0, i++);

    k > 0 ? printf("Number founded  %d time at possion : ", k) : printf("Number not found \n");
    for (int i = 1; i <= size; a[i] == Search ? printf("%d ", i) : 0, i++);

    return 0;
}

void findnum()
{
    int *size = (int*)malloc(sizeof(int));
    int *Search = (int*)malloc(sizeof(int));
    int *a = calloc(size, sizeof(int));

    printf("Enter size of your data: ");
    scanf("%d", &size);

    printf("Enter your Number \n");

    for (int i = 1; i <= size; printf("%d: ", i), scanf("%d", &a[i]), i++);

    printf("Enter Number that you want to search in data: ");
    scanf("%d", &Search);

    linearSearch(Search, a, size);
    free(a);
}

int main()
{
    findnum();
    return 0;
}