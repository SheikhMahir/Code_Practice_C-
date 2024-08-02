#include<stdio.h>
int main()
{
    while(1)
    {
        float start,d,end,sum=0,i;
        printf("  [ Series ]\n\n");
        printf("Enter Starting : ");
        scanf("%f",&start);
        printf("Enter Gap      : ");
        scanf("%f",&d);
        printf("Enter Ending   : ");
        scanf("%f",&end);

        for (i=start; i<=end; i+=d)
        {
            printf("(1/%.1f) + ",i);
            sum = sum + 1/i;
        }
        printf(" = %.1f\n\n",sum);
        getch();
    }
}
