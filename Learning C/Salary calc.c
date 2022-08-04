#include<stdio.h>
int main()
{
    float bs,da,hra,gs;
    printf("\nEnter Your Basic Salary : ");
    scanf("%f",&bs);
    da=bs*0.4;
    hra=bs*0.2;
    gs=bs+da+hra;
    printf("\nBasic Salary : %0.2f",bs);
    printf("\nDA : %0.2f",da);
    printf("\nHRA : %0.2f",hra);
    printf("\nGross Salary : %0.2f",gs);
    return 0;
}
