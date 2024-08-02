#include<stdio.h>
int main()
{
    int a[100][100],b[100][100],c[100][100];
    int row,col,i,j;

    printf("     [ Sum of Matrix ]\n");
    printf("Please enter row number of A & B : ");
    scanf("%d",&row);
    printf("Please enter col number of A & B : ");
    scanf("%d",&col);

    printf("\nEnter values for A : \n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }

    printf("\nEnter values for B : \n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("B[%d][%d] = ",i,j);
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("Sum of the Matrix : \n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("C[%d][%d] = ",i,j);
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    getch();
}
