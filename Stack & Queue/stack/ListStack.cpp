#include <iostream>
using namespace std;

class stack
{
public:
    struct Node
    {
        int data;
        struct Node *next;
    };

    struct Node *top;
    stack()
    {
        top = nullptr;
    }

    struct Node *createNode(int d)
    {
        struct Node *newNode = new Node;
        newNode->data = d;
        newNode->next = nullptr;
        return newNode;
    }

    void push(int d)
    {
        struct Node *newNode = createNode(d);
        newNode->next = top;
        top = newNode;
        cout << "Element " << d << " pushed onto the stack.\n";
    }
    void pop()
    {
        if (top == nullptr)
        {
            return;
        }
        else
        {
            struct Node *k;
            k = top;
            k->next = 0;
            top = top->next;
            cout << "\n Element removed : " << k->data << "\n";
            delete (k);
        }
    }

    int getTop()
    {
        return top->data;
    }

    int Size()
    {
        struct Node *q = top;
        if (q != nullptr)
        {
            int i = 1;
            while (q->next != 0)
            {
                q = q->next;
                i++;
            }
            return i;
        }
        else
        {
            return 0;
        }
    }

    bool isEmpty()
    {
        struct Node *q = top;
        if (q == nullptr)
        {
            return 1;
        }
        return 0;
    }
    bool isFull()
    {
        return false;
    }

    void display()
    {
        if (isEmpty())
        {
            cout << "\nStack is empty. Nothing to display.\n";
        }
        else
        {

            struct Node *q = top;
            cout << "\nStack elements: ";
            while (q != nullptr)
            {
                cout << q->data << "  ";
                q = q->next;
            }
            cout << endl;
        }
    }
};

int main()
{

    stack myStack;

    int choice;
    do
    {
        cout << "\n---- Stack Menu ----\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Display\n";
        cout << "4. Get Top\n";
        cout << "5. Get Size\n";
        cout << "6. Check if Empty\n";
        cout << "7. Check if Full\n";
        cout << "8. Exit\n";
        cout << "\nEnter your choice: ";
        cin >> choice;
        cout << "\n";
        switch (choice)
        {
        case 1:
            int element;
            cout << "Enter the element to push: ";
            cin >> element;
            myStack.push(element);
            break;

        case 2:
            myStack.pop();
            break;

        case 3:

            myStack.display();
            cout << endl;
            break;

        case 4:
            if (!myStack.isEmpty())
                cout << "Top element: " << myStack.getTop() << endl;
            else
                cout << "Stack is empty.\n";
            break;

        case 5:
            cout << "Stack size: " << myStack.Size() << endl;
            break;

        case 6:
            if (myStack.isEmpty())
                cout << "Stack is empty.\n";
            else
                cout << "Stack is not empty.\n";
            break;

        case 7:
            if (myStack.isFull())
                cout << "Stack is full.\n";
            else
                cout << "Stack is not full.\n";
            break;

        case 8:
            cout << "Exiting program.\n";
            break;

        default:
            cout << "Invalid choice. Please enter a valid option.\n";
        }
    } while (choice != 8);

    return 0;
}