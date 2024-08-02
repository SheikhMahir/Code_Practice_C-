#include<stdio.h>
int main()
{
    while(1)
    {
        int num[20],min,i,x;
        printf("\n\nEnter Array size : ");
        scanf("%d",&x);

        for(i=0; i<x; i++)
        {
            scanf("%d",&num[i]);
        }

        min=num[0];
        for(i=1; i<x; i++)
        {
            if(min>num[i])
                min=num[i];
        }
        printf("Minimum is %d",min);

        getch();
    }
}
