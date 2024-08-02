#include<stdio.h>
int main()
{
    while(1)
    {
        int nm,sm=0,st,temp,fact,i;
        printf("[Strong Number Cheeking]\n\n");
        printf("Please enter  Ur number : ");
        scanf("%d",&nm);

        temp = nm;

        while (temp!=0)
        {
            st = temp%10;

            fact = 1;
            for (i=1; i<=st; i++)
            {
                fact = fact*i;

            }
            sm = sm+fact;
            temp = temp/10;
        }
        if (sm==nm)
            printf("It's strong number.\n\n");
        else
            printf("It's not strong number.\n\n");
    getch();}
}
