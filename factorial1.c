#include<stdio.h>
int main()
{while(1){
    int x,y,z=1;
    printf("Please enter factorial number : ");
    scanf("%d",&y);

    for (x=1; x<=y; x++)
    {
        z=z*x;
        printf("No. %d\tFactorial: %d\n", x,z);
    }
    printf("Factorial of %d : %d\n",y,z);
    getch();}
}
