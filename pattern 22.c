#include<stdio.h>
int main()
{
    while(1)
    {
        int row,col,end;
        printf("    [ Pattern ] \n");
        printf("Please enter ending : ");
        scanf("%d",&end);

        for(row=1; row<=end; row++)
        {
            for(col=1; col<=row; col++)
            {
                if ( row==1 || row == end || col==1 || col==row )
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
        }
        printf("\n");
        getch();
    }
}
