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

    struct node *d = (struct node *)malloc(sizeof(struct node));
    printf("Enter data : ");
    scanf("%d", &(d->data));
    d->next = 0;
    return d;
};

void insertAtLast()
{
    struct node *q = CreateNode();
    if (start == 0)
    {
        start = q;
    }
    else
    {
        struct node *w = start;

        while (w->next != 0)
        {
            w = w->next;
        }

        w->next = q;
    }
};

void display()
{
    struct node *p = start;
    while (p != 0)
    {
        printf(" %d ", p->data);
        p = p->next;
    }
    printf("\n");
}

void deletfromlast()
{
    if (start == 0)
    {
        printf("No");
    }
    else
    {
        struct node *a, *w = start;
        while (w->next->next != 0)
        {
            w=w->next;
        }
        a = w->next;
        w->next = 0;
        free(a);
    }
}
int main()
{
    int x = 0;
    while (x < 5)
    {
        insertAtLast();
        x++;
    }
    display();
    int i = 0;
    while (i < 2)
    {
        deletfromlast();
        display();
        i++;
    }

    display();

    return 0;
}