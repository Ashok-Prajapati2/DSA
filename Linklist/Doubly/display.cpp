#include "createnode.cpp"
#include "insertatlast.cpp"
#include "insertatstart.cpp"
#include "insertatlast.cpp"
#include "deleteatmiddle.cpp"
#include "deleteatstart.cpp"
#include "deleteatend.cpp"

void Display()
{
    struct node *q = start;
    int i = 0;
    int myarr[i] = {};
    cout << "Start : " << start << endl;
    while (q != 0)
    {

        cout << "data : " << q->data << "\n";
        cout << "perv : " << q->perv << "\n";
        cout << "next : " << q->next << "\n";
        myarr[i] = q->data;

        i++;
        q = q->next;
    }

    cout << "\nData : ";
    for (int j = 0; j < i; ++j)
    {
        cout << myarr[j] << " ";
    }
    cout << "\n\n";
}

int main()
{
    int ch;
    bool a = 1;

    cout << "insert start  : 1" << endl;
    cout << "insert last   : 2" << endl;
    cout << "insert middle : 3" << endl;
    cout << "delete start  : 4" << endl;
    cout << "delete middle : 5" << endl;
    cout << "delete last   : 6" << endl;
    cout << "Display       : 7" << endl;
    cout << "Exit          : 8" << endl;

    while (a)
    {

        cout << "Enter ch : ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            insertatstart();
            break;
        case 2:
            insertatlast();
            break;
        case 3:
            insertatmiddle();
            break;
        case 4:
            deleteatstart();
            break;
        case 5:
            deleteatmiddle();
            break;
        case 6:
            deleteatend();
            break;
        case 7:
            Display();
            break;
        case 8:
            a = 0;
            break;
        default:
            return 0;
        }
    }

    return 0;
}
