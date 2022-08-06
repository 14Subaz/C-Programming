// C- Pointers ********************************************************************!important

//sample program
//Single pointer*************
/*
#include<stdio.h>

int main()
{
    int a=10, *p;
    p=&a; // Address of A.
    printf("\n Value of A   : %d", a);
    printf("\n Address of A : %d", &a);
    printf("\n Value of P   : %d", p);
    printf("\n Address of P : %d", &p);
    printf("\n Dereferencing of P : %d", *p);

    return 0;

}
*/
//Double Pointer and triple pointer *************
//sample program for double pointer
#include<stdio.h>

int main()
{
    int a=10;
    int *p; // Single pointer
    int **q; // Double pointer
    int ***r; // Triple pointer
    p=&a; // Address of A.

    printf("\n Value of A   : %d", a);
    printf("\n Address of A : %d", &a);
    printf("\n Value of P   : %d", p);
    printf("\n Address of P : %d", &p);
    printf("\n Dereferencing of P : %d", *p);

    printf("\n -----------------------------------");

    q=&p; // Address of **q.
    printf("\n Value of P   : %d", p);
    printf("\n Address of p : %d", &p);
    printf("\n Value of q   : %d", q);
    printf("\n Address of q : %d", &q);
    printf("\n Dereferencing of P : %d", **q);

     printf("\n -----------------------------------");

     r=&q; // Address of **q.
    printf("\n Value of q   : %d", q);
    printf("\n Address of q : %d", &q);
    printf("\n Value of r  : %d", r);
    printf("\n Address of r : %d", &r);
    printf("\n Dereferencing of r : %d", ***r);

     printf("\n -----------------------------------");

    return 0;

}
