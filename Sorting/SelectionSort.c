#include <stdio.h>

void SelectionSort(int myarr[], int N)
{
    int min;

    for (int j = 0; j < N; j++)
    {
        for (int i = j+1; i < N; i++)
        {
            min = myarr[j];

            if (min > myarr[i])
            {
                myarr[j] = myarr[i];
                myarr[i] = min;
            }
        }
    }
}

int main()
{
    int myarr[] = {10, 75, 74, 6, 9, 1, 4, 7, 5, 3};
    int N = sizeof(myarr) / sizeof(myarr[0]);
    SelectionSort(myarr, N);

    for (int i = 0; i < N; i++)
    {
        printf("\n %d \n", myarr[i]);
    }
    return 0;
}