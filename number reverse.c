#include<stdio.h>
int main()
{
    while(1)
    {
        int nm,st,sm;
        printf("Number Reverse Program.\n\n");
        printf("Enter Ur number : ");
        scanf("%d",&nm);

        while(nm!=0)
        {
            st = nm%10;
            sm = (sm*10)+st;
            nm = nm/10;
        }
        printf("Reverse form    = %d",sm);
        sm = 0;
        getch();
    }
}
