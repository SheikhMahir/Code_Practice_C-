#include<stdio.h>
int main()
{
    while(1)
    {
        int n,sm=0,i;
        printf("     [ Sum of Series ]\n\n");
        printf("Enter Series Ending point : ");
        scanf("%d",&n);
        printf("1 + 2 + 3 + ......... + %d ",n);

        for (i=1; i<=n; i++)
        {
            sm = sm+i;
        }
        printf("= %d\n\n",sm);
        sm=0;
        getch();
    }
}
