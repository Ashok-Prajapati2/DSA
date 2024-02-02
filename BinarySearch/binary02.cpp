#include <iostream>
using namespace std;
;
int main()
{
    int myarr[] = {4, 5, 7, 9, 12, 18, 45, 56, 89};
    int search = 56;

    int f = 0, l = sizeof(myarr) / sizeof(myarr[0]);
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
    return 0;
}