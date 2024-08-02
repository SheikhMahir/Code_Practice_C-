#include<stdio.h>
int main()
{
    while(1)
    {
        int n1,n2,count=0,fibo,range;
        printf("   [ Fibonacci Series ]\n\n");
        printf("[Please enter 1st number : ");
        scanf("%d",&n1);
        printf("[Please enter 2nd number : ");
        scanf("%d",&n2);
        printf("Please enter range : ");
        scanf("%d",&range);

        while(count<range)
        {
            if(count<=1)
            {
                fibo=count;
            }
            else
            {
                fibo = n1 + n2;
                n1 = n2;
                n2 = fibo;
            }
            printf("%d, ",fibo);
            count++;
        }
        printf("\n\n");
        getch();
    }
}
