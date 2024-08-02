#include<stdio.h>
int main()
{
    while(1)
    {
        int start,end,even=0,odd=0,sum=0,i;
        printf("  [ Series ]\n\n");
        printf("Enter Starting : ");
        scanf("%d",&start);
        printf("Enter Ending   : ");
        scanf("%d",&end);

        for (i=start; i<=end; i++)
        {
            if(i%2==0)
            {
                printf("%d + ",i);
                even = even + i;
            }
            else
            {
                printf("%d - ",i);
                odd = odd + i;
            }
        }
        printf(" = %d\n\n",odd - even);
        getch();
    }
}
