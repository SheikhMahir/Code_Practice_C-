#include<stdio.h>
int main()
{
    while(1)
    {
        int num[20],pos,value,i,x;

        printf("Enter Array size : ");
        scanf("%d",&x);
        for (i=1; i<=x; i++)
        {
            scanf("%d",&num[i]);
        }

        printf("Which number U searching : ");
        scanf("%d",&value);
        for(i=0; i<x; i++)
        {
            if(value==num[i])
            {
                pos=i;
                break;
            }
        }

        if(pos == -1)
            printf("Here is not exist that number.");
        else
            printf("Num[%d] th position of the number.",pos);

        printf("\n\n");
        getch();
    }
}
