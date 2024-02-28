#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *x = (int *)malloc(sizeof(int));

    *x = 5;
    printf("\n%d \n\n", *x);

    free(x);

    int *p = (int *)calloc(5, sizeof(int));

    for (int i = 0; i < 5; i++)
    {
        // printf("%d ", i);
        x[i] = i * i;
        printf("%d \n", *(x + i));
    }
    printf("this is calloc %d \n %d \n ", p,  *p);


    int *q = realloc(p, 8 * sizeof(int));
    if (q != NULL)
    {
        p = q;
        printf("this is realloc %p \n", (void *)p);

        for (int i = 5; i < 7; i++)
        {
            p[i] = i * i;
            printf("%d \n", p[i]);
        }
    }
    else
    {
        printf("realloc failed\n");
        free(p);
    }

    free(p);

    
    return 0;
}


                                                             
                                                             