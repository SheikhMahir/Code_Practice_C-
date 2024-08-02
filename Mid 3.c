#include <stdio.h>

void main()
{
    while(1)
    {
        int row,col,end,x,y;
        printf("Input number of ending : ");
        scanf("%d",&end);
        for(row=1; row<=end; row++)
        {
            if(row%2==0)
            {
                x=1;
                y=0;
            }
            else
            {
                x=0;
                y=1;
            }
            for(col=1; col<=row; col++)
                if(col%2==0)
                    printf("%d",x);
                else
                    printf("%d",y);
            printf("\n");
        }
        printf("\n\n");
        getch();
    }
}
