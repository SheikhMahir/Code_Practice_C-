#include<stdio.h>
int main()
{
    while(1)
    {
        int n1,n2,s;
        printf("Please enter 1st number : ");
        scanf("%d",&n1);
        printf("Please enter 2nd number : ");
        scanf("%d",&n2);
        int x=n1;
        int y=n2;

        while(n2!=0)
        {
            s=n1%n2;
            n1=n2;
            n2=s;
        }
        printf("GCD = %d\n",n1);
        printf("LGM = %d\n",s=(x*y)/n1);
        getch();
    }
}
