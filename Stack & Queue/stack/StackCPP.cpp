#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> st;

    int choice;
    do
    {
        cout << "\n---- Stack Menu ----\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Top\n";
        cout << "4. Size\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            int element;
            cout << "Enter the element to push: ";
            cin >> element;
            st.push(element);
            cout << "Element " << element << " pushed onto the stack.\n";
            break;

        case 2:
            if (!st.empty())
            {
                cout << "Element " << st.top() << " popped from the stack.\n";
                st.pop();
            }
            else
            {
                cout << "Stack is empty. Cannot pop.\n";
            }
            break;

        case 3:
            if (!st.empty())
            {
                cout << "Top element: " << st.top() << endl;
            }
            else
            {
                cout << "Stack is empty.\n";
            }
            break;

        case 4:
            cout << "Stack size: " << st.size() << endl;
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
