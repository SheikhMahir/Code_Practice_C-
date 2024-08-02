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
                  if(row%2==0)
                    printf("0 ");
                else
                    printf("1 ");
            }
            printf("\n");
        }
        printf("\n\n");
        getch();
    }
}
