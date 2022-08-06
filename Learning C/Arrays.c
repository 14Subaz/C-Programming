//Single dimensional Arrays:
/*
#include<stdio.h>

int main()
{
    int i, j, a[100], n;
    printf("\nEnter the Limit: ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        printf("\nEnter the value: ");
        scanf("%d", &a[i]);

    }
    for(i=0;i<n;i++)
    {
        printf("\n%d", a[i]);
    }
    return 0;

}
*//*
//Two dimensional Arrays:

#include<stdio.h>
int main()
{

    int a[100][100], b[100][100], c[100][100];
    int i , j, n, m;
    printf("\nEnter the Rows: ");
    scanf("%d", &n);
    printf("\nEnter the column: ");
    scanf("%d", &m);

    for(i=0;i<n;i++)
    {
        for(j=0; j<n ;j++)
        {
            printf("\n Enter the value of a[%d][%d]:", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("\n Enter the value of b[%d][%d]:" ,i, j );
            scanf("%d", &b[i][j]);
        }
    }

    for(i=0;i<n;i++)
    {



        for(j=0;j<n;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            printf("\t %d", c[i][j]);
        }
        printf("\n");

    }

    return 0;
}
*//*

//string ******************

#include<stdio.h>
int main()
{
    char c[10];
    printf("Enter the String: ");
    gets(c);

    printf("%s", c);



    return 0;

}
*/

//String fuctions:
/*
#include<stdio.h>
#include<string.h>

int main()
{
    char c[20], a[20];
    char x[]={'r', 'a', 'm', '\0'};
    char y[]={'k', 'u', 'm', 'a', 'r', '\0'};
    printf("x: %s", x);
    printf("\n Enter the String: ");
    gets(c);

    printf("Length : %d", strlen(c)); //string length
    printf("\n String Reverse : %s", strrev(c)); //String reverse
    printf("\n String Reverse : %s", strrev(c)); //String reverse
    printf("\n String Upper case : %s", strupr(c)); //String uppercase
    printf("\n String Lower case : %s", strlwr(c)); //String lowercase
    printf("\n String compare : %d", strcmp(x,c)); //String compare  || 0 is correct and -1 is wrong.
    printf("\n String copy : %s", strcpy(a, c)); //String copy  (copy from , copy to)
    printf("\n String a : %s",a); //String show in a
    printf("\n String Concatenation : %s", strcat(x, y)); //Joint two strings


    return 0;

}
*/ /*
// Math Function:
#include<stdio.h>
#include<math.h>

int main()
{
    printf("Square root of 4: %0.2f", sqrt(4));
    printf("\n Power of 2^3: %0.2f", pow(2,3));
    printf("\n abs of -5: %d", abs(-5));
    printf("\n Ceil of 3.2: %0.2f", ceil(3.2)); //NEAREST NEXT LARGER NUMBER FOR 3.2 IS 4
    printf("\n Ceil of 3.2: %0.2f", ceil(3.7)); // "
    printf("\n FLOOR of 3.2: %0.2f", floor(3.2));// NEAREST BEFORE SMALLER NUMBER FOR 3.2 IS 3
    printf("\n FLOOR of 3.2: %0.2f", floor(3.7));
    printf("\n ROUND of 3.2: %0.2f", round(3.2));
    printf("\n ROUND of 3.2: %0.2f", round(3.7));

    return 0;
}
*//*

//Functions in C Programming:

#include<stdio.h>

void add()
{
    int a, b, c;
    printf("\n Enter the value of A: ");
    scanf("%d", &a);
    printf("\n Enter the value of B: ");
    scanf("%d", &b);
    c=a+b;
    printf("\n The value of C: %d", c);
}
int main()
{
    int n, i;
   printf("\n Enter the limit: ");
   scanf("%d", &n);

   for(i=0; i<=n; i++)
   {
       add();

   }

    return 0;
}


//Types of function

Inbuild function
User defined function
   1. call by value
           1. Return Type (Data-type)
            2. Not Return (Void)
   2. call by reference
 */

// No Return without Argument function in C   (void means no return)********************
/*
Rules for create function
    1. Function Declaration
    2. Function calling
    3. Function Definition
*//*
#include<stdio.h>

//function declaration
void add()
{   //function definition
    int a, b, c;
    printf("\n Enter the value of A: ");
    scanf("%d", &a);
    printf("\n Enter the value of B: ");
    scanf("%d", &b);
    c=a+b;
    printf("\n The value of C: %d", c);
}
int main()
{
    int n, i;
   printf("\n Enter the limit: ");
   scanf("%d", &n);

   for(i=0; i<=n; i++)
   {    //Function calling
       add();

   }

    return 0;
}
*//* Return type function without Argument *************************
#include<stdio.h>

//function declaration
int add();

int main()
{
    int a;
    // Function calling
    a=add();
    printf("\n Total : %d", a);

    return 0;
}
int add()
{
    int a, b;
    printf("\n Enter the value of A & B: ");
    scanf("%d%d", &a, &b);

    return a+b;
}
*//*

//Return With Argument Function in C
#include<stdio.h>
int add(int,int);
int main()
{
    int a,b;
    printf("\nEnter The Value of A & B : ");
    scanf("%d%d",&a,&b);
    a=add(a,b);
    printf("\nTotal : %d",a);
    return 0;
}

int add(int x,int y)
{
    return x+y;
}
*/
//Recursion Function in C Programming
#include<stdio.h>
/*
    5!
    1*2*3*4*5
*//*

int factorial(int i) //5
{
    if(i<=1){
        return 1;
    }
    return i*factorial(i-1);  //5*4*3*2*1
}

int main()
{
    int x;
    printf("\n Enter the factorial: ");
    scanf("%d", &x);
    printf("Factorial : %d",factorial(x));
    return 0;
}
*//*
// Call by reference

#include<stdio.h>
void swap(int *x, int *y)
{
   int temp;
   temp=*x;
   *x=*y;
   *y=temp;
}
int main()
{
    int a, b;
    printf("\n Enter the value of A & B: ");
    scanf("%d%d", &a, &b);
    printf("\n Before Swap A: %d and B: %d", a, b);
    swap(&a, &b);
    printf("\n After Swap A: %d and B: %d", a, b);
    return 0;
}
*//*
// Local Variable

#include<stdio.h>

int main()
{
    for(int/*Local Variable*//* i=0;i<5;i++)
    {
        printf("\n%d", i);
    }
}
*//*

//Global Variable

#include<stdio.h>
//function declaration
void display();

int a=10;

int main()
{
    printf("\n Value of A: %d", a);
    //function calling
    display();
    return 0;

}
//function definition
void display()
{
    a++;
    printf("\n Value of A: %d", a);

}
*/
/*
//Static Variable:

#include<stdio.h>

void display();

int main()
{
    display();
    display();
    display();

}
void display()
{
    static int x=1;
    x++;
    printf("\nx: %d", x);


}
*/

// Enumeration or enum in c

#include<stdio.h>
enum Bool{no=000, yes=111};
int main()
{
    enum Bool a;
    a=no;
    printf("%d", a);

    return 0;
}


