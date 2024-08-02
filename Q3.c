#include<stdio.h>
int main()
{
    while(1)
    {
        char str[100], *pt;
        int i = 0;
        printf("[ Calculating length of \nthe string using a pointer ]\n\n");
        printf("Enter string [below 100 chars] : ");
        gets(str);
        pt = str;
        while (*pt != '\0')
        {
            i++;
            pt++;
        }
        printf("Length of String : %d\n\n", i);

        getch();
    }
}
