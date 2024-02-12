#ifndef INSERTATLAST_H
#define INSERTATLAST_H

#include "createnode.cpp"

void insertatlast()
{
    struct node *q = CreateNode();

    if (start == 0)
    {
        start = q;
    }
    else
    {
        struct node *x = start;

        while (x->next != 0)
        {
            x = x->next;
        }

        x->next = q;
        q->perv = x;
    }
}

#endif