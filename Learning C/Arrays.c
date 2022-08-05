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
*/
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

        for(j=0;j<n;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            printf("\t %d", c[i][j]);
        }
        printf("\n");

    }

return 0;
}
