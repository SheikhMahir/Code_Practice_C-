#include<stdio.h>
int main()
{
    while (1)
    {
        int n1,n2,sm=0,a=1,b=2;
        printf("    [Sum of Series]\n\n");
        printf("Enter 1st number Ending : ");
        scanf("%d",&n1);
        printf("Enter 2nd number Ending : ");
        scanf("%d",&n2);

        while(a<=n1 && b<=n2)
        {
            sm = sm + a*b;
            a = a+1;
            b = b+1;
        }
        printf("Sum of the series = %d\n\n",sm);
        getch();
    }
}
