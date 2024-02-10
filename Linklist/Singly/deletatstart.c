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

void insertAtStart()
{
    struct node *k = CreateNode();
    if (start == 0)
    {
        start = k;
    }
    else
    {
        k->next = start;
        start = k;
    }
};

void deletfromstart(){

    struct node *p;
    p = start;
    start = p->next;
    p->next = 0;
    free(p);



}

void display(){
    struct node *p = start;
    while(p!=0){
        printf(" %d ",p->data);
        p = p->next;
    }
    printf("\n");
}

int main()
{
    int x = 0;
    while (x < 5)
    {
        insertAtStart();
        x++;
    }
    display();
    int i =0;
    while (i < 2)
    {
        deletfromstart();
        display();
        i++;
    }

    display();

    return 0;
}