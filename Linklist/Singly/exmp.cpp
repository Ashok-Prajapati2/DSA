#include <iostream>
#include <string>
using namespace std;

int main()
{
    struct node
    {
        int data;
        struct node *next;
    };

    struct node *start = NULL;

    struct node a;
    a.data = 5;

    struct node *p;

    p = (struct node *)malloc(sizeof(struct node));

    p->data = 22;

    cout << p->data << " " << start << endl;

    return 0;
}