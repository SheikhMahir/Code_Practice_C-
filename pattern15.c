#include<stdio.h>
int main()
{
    while(1)
    {
        int end,row,col;
        printf("     [Pattern]\n\n");
        printf("Please Enter Ending : ");
        scanf("%d",&end);

        for(row=1; row<=end; row++)
        {
            for(col=1; col<=row; col++)
            {
                    printf("%d ",row);
            }
            printf("\n");
        }
        for(row=end-1; row>=1; row--)
        {
            for(col=1; col<=row; col++)
            {
                    printf("%d ",row);
            }
            printf("\n");
        }
        printf("\n\n");
        getch();
    }
}
