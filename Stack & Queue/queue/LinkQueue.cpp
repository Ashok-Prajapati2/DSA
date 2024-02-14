#include <iostream>
using namespace std;

class Queue
{
    struct Node
    {
        int data;
        struct Node *next;
    };

    struct Node *Top;
    struct Node *Last;

public:
    Queue()
    {
        this->Top = this->Last = nullptr;
    }
    struct Node *CreateNode(int d)
    {
        struct Node *q = new Node;
        q->data = d;
        q->next = nullptr;
        return q;
    }

    void Push(int d)
    {
        struct Node *w = CreateNode(d);
        if (this->Top == nullptr)
        {
            this->Top = this->Last = w;
            w->data = d;
        }
        else
        {
            this->Last->next = w;
            this->Last = w;
        }
    }

    void Pop()
    {
        if (this->Top == nullptr)
        {
            cout << "No Data for Remove \n";
            return;
        }
        cout << "Element removed :  " << this->Top->data << "\n";
        struct Node *a = this->Top;

        if (this->Top->next == nullptr)
        {
            this->Top = nullptr;
            delete (a);
            return;
        }

        this->Top = this->Top->next;
        this->Top->next = nullptr;
        delete (a);
    }

    void Display()
    {
        struct Node *a = this->Top;
        if (a == nullptr)
        {
            cout << "No Queue Data \n";
            return;
        }

        cout << "\nQueue Data : ";
        while (a != nullptr)
        {
            cout << a->data << " ";
            a = a->next;
        }
        cout << "\n";
    }
    void getTop()
    {
        if (this->Top == nullptr)
        {
            cout << "\nNo Data\n";
            return;
        }
        cout << "Top Element is :" << this->Top->data;
        }
};

int main()
{

    Queue myQueue;

    int choice;
    do
    {
        cout << "\nMenu:\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Display\n";
        cout << "4. getTop\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            int data;
            cout << "Enter data to push: ";
            cin >> data;
            myQueue.Push(data);
            break;

        case 2:
            myQueue.Pop();

            break;

        case 3:
            myQueue.Display();
            break;

        case 4:
            myQueue.getTop();
            break;
        case 5:
            cout << "Exiting program.\n";
            break;

        default:
            cout << "Invalid choice. Please enter a valid option.\n";
        }

    } while (choice != 5);

    return 0;
}
