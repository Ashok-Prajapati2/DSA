#include <stdio.h>

int main()
{
    int a[10] = {10, 45, 57, 48, 24, 35, 65, 48, 52, 48};
    int Search = 47;
    int k=0;

    for (int i = 0; i < sizeof(a) / 4; i++)
    {
        if (a[i] == Search)
        {
           k++; 
        }
    }

    if(k>0){
    printf("Number founded  %d time \n", k);
    }
    else if(k==0){
        printf("Number not found \n");
    }

    return 0;
}