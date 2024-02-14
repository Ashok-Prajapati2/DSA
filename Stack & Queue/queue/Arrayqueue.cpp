#include <iostream>
using namespace std;

class Queue
{
    int *myArray;
    int top;
    int last;
    int cap;

public:
    Queue(int cap)
    {
        this->top = 0;
        this->last = -1;
        this->cap = cap;
        myArray = new int[cap];
    }

    ~Queue()
    {
        delete[] myArray;
    }

    void Push(int data)
    {
        if (cap - 1 == last)
        {
            cout << "Queue is Full.\n";
        }
        else
        {
            this->last++;
            this->myArray[this->last] = data;

            cout << "\nElement added in Queue :  " << data << "\n";
        }
    }

    void Pop()
    {
        if (last == -1)
        {
            cout << "\nNo any Element in Queue \n";
        }
        else
        {
            cout << "\nElement removed : " << myArray[this->top] << "\n\n";
            for (int i = 0; i <= this->last; i++)
            {
                myArray[i] = myArray[i + 1];
            }
            this->last--;
        }
    }

    bool is_Empty()
    {
        return last == -1;
    }
    bool is_Full()
    {
        return cap - 1 == last;
    }
    int getTop()
    {
        return this->myArray[0];
    }
    int Size()
    {
        return this->cap;
    }
    void Display()
    {
        if (is_Empty())
        {
            cout << "\nNo any Element in Queue \n";
            return;
        }
        cout << "\nQueue is : ";
        for (int i = 0; i <= this->last; i++)
        {
            cout << myArray[i] << " ";
        }
        cout << "\n";
    }
};
int main()
{
    int capacity;
    cout << "Enter the capacity of the queue: ";
    cin >> capacity;

    Queue myQueue(capacity);

    int choice;
    do
    {
        cout << "\n---Menu:---\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Display\n";
        cout << "4. Check if Empty\n";
        cout << "5. Check if Full\n";
        cout << "6. Get Top Element\n";
        cout << "7. Get Size\n";
        cout << "8. Exit\n";
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
            if (myQueue.is_Empty())
                cout << "Queue is empty.\n";
            else
                cout << "Queue is not empty.\n";
            break;

        case 5:
            if (myQueue.is_Full())
                cout << "Queue is full.\n";
            else
                cout << "Queue is not full.\n";
            break;

        case 6:
            if (!myQueue.is_Empty())
                cout << "Top element: " << myQueue.getTop() << "\n";
            else
                cout << "Queue is empty.\n";
            break;

        case 7:
            cout << "Queue size: " << myQueue.Size() << "\n";
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
