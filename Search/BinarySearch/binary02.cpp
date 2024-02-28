#include <iostream>
#include <cstdlib>
using namespace std;

void BinarySearch(int search, int myarr[], int l)
{
    int f = 0;
    int m;
    while (f < l)
    {
        m = (f + l) / 2;

        if (myarr[m] == search)
        {
            cout << "Number found at " << m + 1 << " possion" << endl;
            break;
        }

        else if (search > myarr[m])
        {
            f = m + 1;
        }
        else if (search < myarr[m])
        {
            l = m - 1;
        }
    }
    if (f >= l)
    {
        cout << "Number not fount" << endl;
    }
}

int main()
{

    int size;
    int search;

    cout << "Enter size of data : ";
    cin >> size;

    cout << "Enter sorted data :--> \n";
    int *myarr = static_cast<int *>(calloc(size, sizeof(int)));
    for (int i = 0; i < size; i++)
    {

        cout << i + 1 << ": ";
        cin >> myarr[i];
    }

    cout << "Enter number that you want to find in data : ";
    cin >> search;

    int l = sizeof(myarr) / sizeof(myarr[0]);
    BinarySearch(search, myarr, l);

    return 0;
}