#include<stdio.h>
int main()
{
    while(1)
    {
        int start,d,end,i;
        printf("  [ Series ]\n\n");
        printf("Enter Starting : ");
        scanf("%d",&start);
        printf("Enter Gap      : ");
        scanf("%d",&d);
        printf("Enter Ending   : ");
        scanf("%d",&end);

        for (i=start; i<=end; i+=d)
        {
            printf("%d, ",i);
        }
        printf("...\n\n");
        getch();
    }
}
