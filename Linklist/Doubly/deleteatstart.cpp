#ifndef DELETEATSTART_H
#define DELETEATSTART_H
#include "createnode.cpp"
void deleteatstart()
{
    struct node *p = start;
    if (start == 0)
    {
        cout << "No any data";
    }
    else if (start->next == 0)
    {
        delete (start);
    }
    else
    {
        start = start->next;
        start->perv = 0;
        p->next = 0;
        delete (p);
    }
}
#endif
