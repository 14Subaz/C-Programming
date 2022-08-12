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
/*
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
*/

//Pointer Arithmetic in C Program
/*
#include<stdio.h>

int main()
{

    int a=1;
    int *p, *r;
    p=&a;
    r=p+1+;
    printf("Size of A : %d", sizeof(a));
    printf("\nValue of p: %d", p);
    printf("\nValue of r: %d", r);
    return 0;
}
*//*
//Pointer Handle Array Values in C
#include<stdio.h>
int main()
{
    int a[]={10,20,30,40,50};
    int *p;
    //{10,      20,     30,     40,     50}
    //{6356712,6356716,6356720,6356724,6356728}
    p=&a;


    printf("\nSize of integer    : %d",sizeof(int)); //4
    printf("\nSize of a          : %d",sizeof(a));  //20
    printf("\nLength of a        : %d",sizeof(a)/sizeof(int));//5
    printf("\nAddress of A       : %d",&a);//6356712
    printf("\nValue  of P        : %d",p);//6356712

    p++;
    printf("\nValue  of P        : %d",p);//6356716
    printf("\nValue  of *P       : %d",*p);//20

    printf("\nValue  of *++P        : %d",*++p);//30
    printf("\nValue  of ++*P        : %d",++*p);//31

    return 0;
}
*/
/*
//Generic Pointer or Void Pointers******

#include<stdio.h>
int main()
{
    int a[]={10,20,30,40,50};
    void *p;
    p=&a;
    printf("\n Dereferencing of P: %d", *(int *)p);
    return 0;
}
*//*
//malloc in Pointers
#include<stdio.h>
#include<stdlib.h>
int main()
{
    //void* malloc(size_t size)
    int i,n;
    printf("\nEnter The Limit : ");
    scanf("%d",&n);

    int *ptr=(int *)malloc(n*sizeof(int));

    if(ptr==NULL)
    {
          printf("Memory Not Available ...");
          exit(1);
    }
    /*for(i=0; i<n; i++)
    {
        printf("Enter a integer : ");
        scanf("%d",ptr+i);
    }
    for(i=0;i<n;i++)
    {
        printf("%d  ",*(ptr+i));  // ptr+1
    }

    return 0;
}
*/

//calloc in pointer*************

//calloc in Pointers
/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
    //void* calloc(size_t n,size_t size)

    int i,n;
    printf("\nEnter The Limit : ");
    scanf("%d",&n);
    int *ptr=(int *)calloc(n,sizeof(int));

    if(ptr==NULL)
    {
        printf("Memory Not Available ...");
        exit(1);
    }

    for(i=0; i<n; i++)
    {
        printf("Enter a integer : ");
        scanf("%d",ptr+i);
    }

    for(i=0; i<n; i++)
    {
        printf("\n%d :  %d  ",&ptr+i,*(ptr+i));
    }

    return 0;
}

*/
#include<stdio.h>

int main()
{
    int age;
    char name;

    printf("\n Enter your name: ");
    scanf("%s", &name);

    printf("\n Enter your age: ");
    scanf("%d", &age);

    if(age>=18)
    {
        printf("\n %s your age is %d eligible for vote", name, age);

    }
    else
    {
        printf("\n %s your age is %d not eligible for vote", name, age);
    }
    return 0;
}
