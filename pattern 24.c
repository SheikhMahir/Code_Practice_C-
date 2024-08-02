#include<stdio.h>
int main()
{
    while(1)
    {
        int row,col,end,x=0;
        printf("enter : ");
        scanf("%d",&end);

        for(row=1; row<=end; row++)
        {
            for(col=1; col<=row; col++)
            {
                x++;
                printf("%d ",x);
            }
            printf("\n");
        }
        getch();
    }
}
