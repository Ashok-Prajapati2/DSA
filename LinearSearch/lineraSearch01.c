#include <stdio.h>

int main()
{
    int a[10] = {10, 45, 57, 78, 24, 35, 65, 48, 52, 45};
    int Search = 48;

    for (int i = 0; i < sizeof(a) / 4; i++)
    {
        if (a[i] == Search)
        {
            printf("Number founded at %d ", i + 1);
        }
    }
    return 0;
}