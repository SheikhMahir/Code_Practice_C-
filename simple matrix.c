#include<stdio.h>
int main()
{
    while(1)
    {
        int a[100][100],b[100][100];
        int row,col,i,j;

        printf("\n\n    [ Simple Matrix ]\n");
        printf("Enter Array row size of A : ");
        scanf("%d",&row);
        printf("Enter Array col size of A : ");
        scanf("%d",&col);

        printf("Enter values : \n");
        for(i=0; i<row; i++)
        {
            for(j=0; j<col; j++)
            {
                printf("A[%d][%d] = ",i,j);
                scanf("%d",&a[i][j]);
            }
            printf("\n");
        }
        printf("Values are : \n");
        for(i=0; i<row; i++)
        {
            for(j=0; j<col; j++)
            {
                printf("%d ",a[i][j]);
            }
            printf("\n");
        }

        printf("\n\nEnter Array row size of B : ");
        scanf("%d",&row);
        printf("Enter Array col size of B : ");
        scanf("%d",&col);

        printf("Enter values : \n");
        for(i=0; i<row; i++)
        {
            for(j=0; j<col; j++)
            {
                printf("B[%d][%d] = ",i,j);
                scanf("%d",&b[i][j]);
            }
            printf("\n");
        }
        printf("Values are : \n");
        for(i=0; i<row; i++)
        {
            for(j=0; j<col; j++)
            {
                printf("%d ",b[i][j]);
            }
            printf("\n");
        }
        getch();
    }
}
