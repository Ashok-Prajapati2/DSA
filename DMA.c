#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *x = (int *)malloc(sizeof(int));

    *x = 5;
    printf("\n %d \n", *x);

    free(x);

    return 0;
}
