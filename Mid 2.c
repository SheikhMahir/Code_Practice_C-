#include <stdio.h>
void main()
{
    while(1)
    {
        int arr1[50],n,i,j=0,lrg,lrg2nd;

        printf("[Find the second largest element]\n\n");
        printf("Please input the size of array : ");
        scanf("%d",&n);
        printf("\n");

        for(i=0; i<n; i++)
        {
            printf("Element [%d] : ",i+1);
            scanf("%d",&arr1[i]);
        }

        lrg=0;
        for(i=0; i<n; i++)
        {
            if(lrg<arr1[i])
            {
                lrg=arr1[i];
                j = i;
            }
        }

        lrg2nd=0;
        for(i=0; i<n; i++)
        {
            if(i==j)
            {
                i++;
                i--;
            }
            else
            {
                if(lrg2nd<arr1[i])
                {
                    lrg2nd=arr1[i];
                }
            }
        }

        printf("Second largest element :  %d \n\n", lrg2nd);
        getch();
    }
}
