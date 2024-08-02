#include<stdio.h>
int main()
{
    while(1)
    {
        int end,row,col;
        printf(" [Pyramid Pattern] \n\n");
        printf("Please Enter Ending : ");
        scanf("%d",&end);

        for(row=1; row<=end; row++)
        {
            for(col=1; col<=end-row; col++)
            {
                printf(" ");
            }
            for(col=1; col<=row+(row-1); col++)
            {
                if(col%2==0)
                    printf(" ");
                else
                    printf("*");
            }
            printf("\n");
        }

        getch();
    }
}
