#include<stdio.h>
int main()
{
    while(1)
    {
        int nm,st,sm;

        printf("Please enter your number : ");
        scanf("%d",&nm);

        while(nm!=0)
        {
            st = nm%10;
            sm = sm+st;
            nm = nm/10;
        }
        printf("Sum of this number's digits = %d\n\n",sm);
        sm=0;
        getch();
    }
}
