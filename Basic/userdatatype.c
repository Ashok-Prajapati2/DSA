#include <stdio.h>
#include <stdlib.h>

int main()
    {
    struct percentage
        {
        int per;
        };

    struct student
        {
        int roll;
        char name;
        struct percentage* p;
        };

    struct student Ashok;
    struct student Ramesh;
    Ashok.name = 'A';
    Ashok.roll = 06;
    Ashok.p = (struct percentage*)malloc(sizeof(struct percentage));
    Ashok.p->per = 80;

    Ramesh.name = 'R';
    Ramesh.roll = 07;
    Ramesh.p->per = 30;

    free(Ashok.p);


    return 0;
    }