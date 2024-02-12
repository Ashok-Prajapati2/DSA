#ifndef DELETEATEND_H
#define DELETEATEND_H
void deleteatend()
{
    struct node *r , *w = start;
    if (start == 0)
    {
        cout << "The list is empty. No data to delete.\n";
        return;
    }
    if (start->next == 0)
    {
        delete(start);
    }
    else
    {
        while (w->next->next != 0)
        {
            w = w->next;
        }
        r = w->next;
        r->perv=0;
        w->next=0;
        delete(r);
    }
}
#endif