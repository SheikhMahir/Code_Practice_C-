#include<stdio.h>
int main()
{
    while(1)
    {
        int row,col,end;
        printf("enter : ");
        scanf("%d",&end);

        for(row=1; row<=end; row++)
        {
            for(col=1; col<=row; col++)
            {
                printf("%d",col);
            }
            printf("\n");
        }
        getch();
    }
}

