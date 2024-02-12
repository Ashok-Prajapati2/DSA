#ifndef INSERTATSTART_H
#define INSERTATSTART_H
#include "createnode.cpp"

void insertatstart()
{
    struct node *q = CreateNode();
    if (start == 0)
    {
        start = q;
    }
    else
    {
        struct node *w = start;
        start = q;
        q->next = w;
        w->perv=start;
    }
}
#endif