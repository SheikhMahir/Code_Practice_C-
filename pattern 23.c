#include<stdio.h>
int main()
{
    while(1)
    {
        int row,col,end;
        printf("enter : ");
        scanf("%d",&end);

        for (row=1; row<=end; row++)
        {
            for (col=1; col<=end; col++)
            {
                if(col==row || col+row==end+1)
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
        }
        getch();
    }
}
