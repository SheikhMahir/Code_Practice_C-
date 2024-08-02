#include<stdio.h>
int main()
{
    while(1)
    {
        int num,fib[100],i;
        printf("\n\n   [ Fibonacci number Series ]\n\n");
        printf("How many Fibonacci number U want : ");
        scanf("%d",&num);

        fib[0]=0;
        fib[1]=1;

        for(i=2; i<=num; i++)
        {
            fib[i]= fib[i-1] + fib[i-2];
        }

        printf("nth Fibonacci = ",fib);
        for(i=0; i<num; i++)
        {
            printf("%d ",fib[i]);
        }
        getch();
    }
}
