#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *start = 0;

struct node *CreateNode()
{
    struct node *k = (struct node *)malloc(sizeof(struct node));
    printf("Enter data : ");
    scanf("%d", &k->data);

    k->next = 0;

    return k;
}

void insert()
{
    struct node *q = CreateNode();

    if (start == 0)
    {
        start = q;
    }
    else
    {
        int d;
        printf("Enter data where you want to insert : ");
        scanf("%d", &d);

        if (start->next == 0 || start->data == d)
        {

            q->next = start;
            start = q;
        }
        else
        {

            struct node *w, *a;
            w = start;

            while (w->next->data != d)
            {
                w = w->next;
            }

            a = w->next;
            w->next = q;
            q->next = a;
        }
    }
}
void Delete()
{
    struct node *q, *p = start;
    if (start == 0)
    {
        printf("No link  list data ");
    }
    else
    {
        int d;
        printf("enter data that you want to delete : ");
        scanf("%d", &d);

        if (start->data == d)
        {
            q = start;
            start = q->next;
            q->next = 0;
            free(q);
        }
        else
        {

            while (p->next->data != d)
            {
                p = p->next;
            }
            q = p->next;

            p->next = q->next;

            q->next = 0;
            free(q);
        }
    }
}

void Display()
{
    struct node *q = start;
    while (q != 0)
    {
        printf("%d ", q->data);
        q = q->next;
    }
}
int main()
{
    while (1)
    {
        int ch;
        printf("Enter ch : ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            insert();
            break;
        case 2:
            Display();
            break;
        case 3:
            Delete();
            break;
        default:
            break;
        }
    }
    return 0;
}