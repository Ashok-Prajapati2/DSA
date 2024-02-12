#include "createnode.cpp"
#include "insertatlast.cpp"
#include "insertatstart.cpp"
#include "insertatmiddle.cpp"
#include "deleteatmiddle.cpp"
#include "deleteatstart.cpp"
#include "deleteatend.cpp"
void Display()
{

    if (start == 0)
    {
        cout << "The list is empty. No data to display.\n"
             << endl;
        return;
    }
    struct node *q = start;
    int m = 0, i = 0;
    while (q != nullptr)
    {
        i++;
        q = q->next;
    }

    int *dataArray = new int[i];

    q = start;
    cout << "\n\nList Start : " << start << "\n\n";

    while (q != 0)
    {

        cout << "   ⇵\n";
        cout << "_________________________________\n";
        cout << "|  Previous Node: " << q->perv << "\n";
        cout << "|  Data         : " << q->data << "\n";
        cout << "|  Next Node    : " << q->next << "\n";
        cout << "_________________________________\n\n";

        dataArray[m] = q->data;
        m++;

        q = q->next;
    }

    cout << "\nData in the List : ";

    for (int j = 0; j < m; ++j)
    {
        cout << dataArray[j] << " ";
    }
    cout << "\n\n";
    delete[] dataArray;
}

void insertMenu()
{
    cout << "Choose insertion position:" << endl;
    cout << "1. Insert at the beginning" << endl;
    cout << "2. Insert at the end" << endl;
    cout << "3. Insert in the middle" << endl;
}

void deleteMenu()
{
    cout << "Choose deletion position:" << endl;
    cout << "1. Delete from the beginning" << endl;
    cout << "2. Delete from the middle" << endl;
    cout << "3. Delete from the end" << endl;
}

int main()
{
    cout << "\n\nThis program allows you to interact with a linked list, a data structure that stores elements in a linear sequence. You can perform various operations like inserting, deleting, and viewing the elements in the list.\n\n\n";

    int choice;
    bool running = true;
    cout << "\n\nMenu:" << endl;
    cout << "1. Insert" << endl;
    cout << "2. Delete" << endl;
    cout << "3. Display" << endl;
    cout << "4. Exit "
         << endl;

    while (running)
    {

        cout << "\nEnter your choice(1,2,3,4): ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "\n";
            insertMenu();
            cout << "\nEnter your choice for Insert : ";
            cin >> choice;
            switch (choice)
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
            default:
                cout << "Invalid choice for insertion." << endl;
            }
            break;
        case 2:
            cout << "\n";
            deleteMenu();
            cout << "\nEnter your choice for Delete: ";
            cin >> choice;
            switch (choice)
            {
            case 1:
                deleteatstart();
                break;
            case 2:
                deleteatmiddle();
                break;
            case 3:
                deleteatend();
                break;
            default:
                cout << "Invalid choice for deletion." << endl;
            }
            break;
        case 3:
            Display();
            break;
        case 4:
            running = false;
            break;
        default:
            cout << "Invalid choice. Please enter a valid option." << endl;
        }
    }

    cout << " Thank you ! Exiting the program." << endl;

    cout << "     ASHOK\n\n";

    return 0;
}
