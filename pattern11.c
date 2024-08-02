#include<stdio.h>
int main()
{
    while(1)
    {
        int end,row,col;
        printf("     [Pattern]\n\n");
        printf("Please Enter Ending : ");
        scanf("%d",&end);

        for(row=end; row>=1; row--)
        {
            for(col=1; col<=row; col++)
            {
                 printf("%c ",col+64);
            }
            printf("\n");
        }
        printf("\n\n");
        getch();
    }
}
