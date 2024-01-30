#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *x = (int *)malloc(sizeof(int));

    *x = 5;
    printf("%d", *x);

    free(x);

    return 0;
}
