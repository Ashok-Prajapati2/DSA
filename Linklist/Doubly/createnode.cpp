#ifndef CREATENODE_H
#define CREATENODE_H

#include <iostream>
using namespace std;

struct node
{
    struct node *perv;
    int data;
    struct node *next;
};

struct node *start = 0;

extern struct node *CreateNode()
{
    struct node *k;
    k = (struct node *)malloc(sizeof(struct node));
    cout << "\nEnter Data : ";
    cin >> k->data;
    k->next = 0;
    k->perv = 0;
    return k;
}

// It main function only for testing

/*
int main()
{
    struct node *x = CreateNode();
    start = x;
    cout << start->data << "  " << start->perv << " " << start->next << "\n";
    return 0;
}
*/

#endif