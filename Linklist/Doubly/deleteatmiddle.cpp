#ifndef DELETEATMIDDLE_H
#define DELETEATMIDDLE_H
#include "createnode.cpp"

void deleteatmiddle()
{
    struct node *p, *w = start;
    if (start == 0)
    {
        cout << "The list is empty. No data to delete.\n";
        return;
    }
    int d;
    cout << "Enter Data that you want to delete : ";
    cin >> d;

    if (start->next == 0 && start->data == d)
    {
        delete (start);
    }
    else if (start->data == d)
    {
        start = start->next;
        start->perv = 0;
        w->next = 0;
        delete (w);
    }
    else
    {

        while (w->next->data != d)
        {
            w = w->next;
        }
        p = w->next;
        if (p->next == 0)
        {
            w->next = 0;
            p->perv = 0;
            delete (p);
        }
        else
        {
            p->next->perv = p->perv;
            w->next = p->next;
            p->next = 0;
            p->perv = 0;
            delete (p);
        }
    }
}
#endif