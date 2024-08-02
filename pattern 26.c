#include<stdio.h>
int main()
{
    while(1)
    {
        int row,col,end,x;
        printf("enter : ");
        scanf("%d",&end);

        for(row=1; row<=end; row++)
        {
            for(col=1; col<=end-row; col++)
            {
                printf(" ");
            }
            for(col=1; col<=row; col++)
            {
                printf("%d",col);
            }
            for(col=row-1; col>=1; col--)
            {
                printf("%d",col);
            }
             printf("\n");
        }
        for(row=1; row<=end; row++)
        {
            for(col=1; col<=row; col++)
            {
                printf(" ");
            }
            for(col=1; col<=end-row; col++)
            {
                printf("%d",col);
            }
            for(col=(end-row)-1; col>=1; col--)
            {
                printf("%d",col);
            }
             printf("\n");
        }
        getch();
    }
}
