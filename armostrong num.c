#include<stdio.h>
int main()
{
    while(1)
    {
        int nm,sm,st,x;
        printf("[Armstrong Number cheeking Program]\n");
        printf("Please enter ur number : ");
        scanf("%d",&nm);

        x=nm;

        while (nm!=0)
        {
            st = nm%10;
            sm = sm+(st*st*st);
            nm = nm/10;
        }
        if (sm==x)
            printf("It's Armstrong number.\n\n",sm);
        else
            printf("It's not Armstrong number.\n\n");

        sm=0;
        getch();
    }
}
