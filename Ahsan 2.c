#include<stdio.h>
#include<limits.h>
int main()
{
    int n, array[20];

    printf("Enter the Array size: ");
    scanf("%d",&n);

    printf("Enter the elements  : \n");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&array[i]);
    }
    int max = INT_MIN;
    int secondmax = INT_MIN;

    for(int i=0; i<n; i++)
    {
        if(array[i]>max)
        {
            secondmax = max;
            max = array[i];
        }
        else if(array[i]<max && array[i]>secondmax)
        {
            secondmax = array[i];
        }
    }
    printf("Second largest element is %d",secondmax);
    return 0;
}
