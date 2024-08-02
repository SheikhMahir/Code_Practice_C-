#include<stdio.h>
int main()
{
    while(1)
    {
        int i=1,nm,sm=0;
        printf("     [ Sum of Series ]\n\n");
        printf("Please Enter Ending Point : ");
        scanf("%d",&nm);
        printf("1 + 2 + 3 + .........+ %d = ",nm);
        while (i<=nm)
        {
            sm = sm+i;
            i++;
        }
        printf("%d\n\n",sm);
        getch();
    }
}
