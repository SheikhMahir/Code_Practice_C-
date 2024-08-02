#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(i=0; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            if((i+j)%2==0)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }
        printf("\n");
    }
    return 0;
}
