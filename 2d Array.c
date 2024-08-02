#include<stdio.h>
int main()
{
    while(1)
    {
        int a[100][100];
        int row,col,i,j;
        printf("\n\n [ 2D Array Input & Output ]\n");
        printf("Please enter Array Row size : ");
        scanf("%d",&row);
        printf("Please enter Array Col size : ");
        scanf("%d",&col);

        printf("Input Values : \n");
        for (i=0; i<row; i++)
        {
            for (j=0; j<col; j++)
            {
                printf("A[%d][%d] = ",i,j);
                scanf("%d",&a[i][j]);
            }
        }
        printf("Here Arrays are : \n");
        for (i=0; i<row; i++)
        {
            for (j=0; j<col; j++)
            {
                 printf("%d ",a[i][j]);
            }
            printf("\n\n");
        }
        getch();
    }
}
