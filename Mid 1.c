#include <stdio.h>
void main()
{
    int arr1[100], arr2[100];
    int i, n;

    printf("   [Copy elements array to array]\n\n");
    printf("Input the number of elements number : ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        printf("Element [%d] : ",i+1);
        scanf("%d",&arr1[i]);
    }
    for(i=0; i<n; i++)
    {
        arr2[i] = arr1[i];
    }
    printf("\nElements entered into 1st array :\n");
    for(i=0; i<n; i++)
    {
        printf("%d ", arr1[i]);
    }
    printf("\nElements copied into 2nd array  :\n");
    for(i=0; i<n; i++)
    {
        printf("%d ", arr2[i]);
    }
    printf("\n\n");
    getch();
}
