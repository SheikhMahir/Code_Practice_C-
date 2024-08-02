#include<stdio.h>
int main()
{
    while(1)
    {
        int nm,st,sm,x;
        printf("[ Palindrome Number Cheeking program ]\n\n");
        printf("Please Enter Ur Number : ");
        scanf("%d",&nm);

        x = nm;

        while(nm!=0)
        {
            st = nm%10;
            sm = (sm*10)+st;
            nm = nm/10;
        }

        if(x==sm)
            printf("This is Palindrome number.\n\n");
        else
            printf("This is not Palindrome number.\n\n");
        sm=0;
        getch();
    }
}
