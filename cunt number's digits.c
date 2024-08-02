#include<stdio.h>
int main()
{
    while(1)
    {
        int nm,st,sm;
        printf("[Count number's digits]\n");
        printf("Please enter Ur number : ");
        scanf("%d",&nm);

        st=0;

        while (nm!=0)
        {
            (nm/10);
            st++;
            nm = nm/10;
        }
        printf("It's %d digit's number.\n\n",st);
        getch();
    }
}
