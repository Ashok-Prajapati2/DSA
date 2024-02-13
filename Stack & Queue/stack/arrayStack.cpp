#include <iostream>
using namespace std;

class stack
{
    int top;
    int cap;
    int *arr;

public:
    stack(int c)
    {
        this->top = -1;
        this->cap = c;
        this->arr = new int[c];
    }

    void push(int d)
    {
        if (this->top == this->cap - 1)
        {
            cout << "\nStack is full \n";
            return;
        }
        else
        {
            this->top++;
            this->arr[this->top] = d;
        }
    }
    void pop()
    {
        if (this->top == -1)
        {
            cout << "\nStack is empty. No element for delete.\n";
            return;
        }
        else
        {
            cout << "\n Element removed : " << this->arr[top] << "\n";
            this->top--;
        }
    }

    int getTop()
    {
        return this->arr[top];
    }

    int Size()
    {
        return this->top + 1;
    }

    bool isEmpty()
    {
        return this->top == -1;
    }
    bool isFull()
    {
        return this->top == this->cap - 1;
    }
    void display()
    {
        if (isEmpty())
        {
            cout << "\nStack is empty. Nothing to display.\n";
        }
        else
        {
            cout << "\nStack elements: ";
            for (int i = 0; i <= top; i++)
            {
                cout << this->arr[i] << "  ";
            }
            cout << endl;
        }
    }
};

int main()
{
    int capacity;
    cout << "\n\nEnter the capacity of the stack: ";
    cin >> capacity;

    stack myStack(capacity);

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