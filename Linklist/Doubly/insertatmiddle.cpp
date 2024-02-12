#ifndef INSERTATMIDDLE_H
#define INSERTATMIDDLE_H
#include "createnode.cpp"

void insertatmiddle()
{
    struct node *q = CreateNode();

    if (start == 0)
    {
        start = q;
    }
    else
    {
        struct node *y, *p = start;
        int d;
        cout << "Enter data where you want to insert : ";
        cin >> d;
        if (start->data == d)
        {
            
            start->perv = q;
            q->next = start;
            start = q;
        }
        else
        {
            while (p->next->data != d)
            {
                p = p->next;
            }

            y = p->next;
            y->perv = q;
            q->perv=p;
            q->next=y;
            p->next=q;
        }
    }
}
#endif