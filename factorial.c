#include<stdio.h>
int main()
{
    while(1)
    {
        int i,y,z=1;
        printf("Please enter factorial number : ");
        scanf("%d",&y);

        for(i=1; i<=y; i++)
        {
            z=z*i;
        }
        printf("%d\n",z);
        getch();
    }
}
