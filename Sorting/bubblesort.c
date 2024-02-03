#include <stdio.h>

void bubbleSort(int myarr[], int N)
{

    int temp;
    for (int j = 0; j <= N; j++)
    {

        for (int i = 0; i < N - 1; i++)
        {
            if (myarr[i] > myarr[i + 1])
            {
                temp = myarr[i];
                myarr[i] = myarr[i + 1];
                myarr[i + 1] = temp;
            }
        }
    }
}

int main()
{
    int myarr[] = {10, 75, 74, 6, 9, 1, 4, 7, 5, 3};
    int N = sizeof(myarr) / sizeof(myarr[0]);
    bubbleSort(myarr, N);

    for (int i = 0; i < N; i++)
    {
        printf("\n %d \n", myarr[i]);
    }
    return 0;
}