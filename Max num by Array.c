#include<stdio.h>
int main()
{
    while(1)
    {
        int num[20],max,i,x;
        printf("\n\nEnter Array size : ");
        scanf("%d",&x);

        for(i=0; i<x; i++)
        {
            scanf("%d",&num[i]);
        }

        max=num[1];

        for(i=0; i<x; i++)
        {
            if(max<num[i])
                max=num[i];
        }
        printf("Maximum is %d",max);

        getch();
    }
}
