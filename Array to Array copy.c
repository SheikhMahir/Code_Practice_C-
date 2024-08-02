#include<stdio.h>
int main()
{
    while(1)
    {
        int array1[10],array2[100],ip,i;
        printf("Enter Array size : ");
        scanf("%d",&ip);

        printf("Enter 1st Array's elements : \n");
        for(i=0; i<ip; i++)
        {
            scanf("%d",&array1[i]);
        }

        for(i=0; i<ip; i++)
        {
            array2[i]=array1[i];
        }

        printf("Copied elements to 2nd Array : ");
        for(i=0; i<ip; i++)
        {
            printf("%d ",array2[i]);
        }
        getch();
    }
}
