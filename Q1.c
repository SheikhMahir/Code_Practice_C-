#include<stdio.h>
void get_array(int array[])
{
    int i,x;
    printf("[ Function to take input of an array and \nalso print the odd values of the array.]\n\n");
    printf("How much Array you want to input : ");
    scanf("%d", &x);
    printf("Please enter your input array    :");
    for(i=0; i<x; i++)
    {
        printf("\nArray [%d] = ",i+1);
        scanf("%d", &array[i]);
    }
    printf("\nOdd values are :");
    for(i=0; i<x; i++)
    {

        if(array[i]%2==1)
        {

            printf("%d\t", array[i]);
        }
    }
        printf("\n\n");

}
int main()
{
    while(1)
    {
        int array[10];
        get_array(array);
        getch();
    }
}
