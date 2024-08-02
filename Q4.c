#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp;
    char ch;
    int words=0;
    fp=fopen("abc.txt","r");
    if(fp==NULL)
    {
        printf("There is an error while opening a file");
        return -1;
    }
    printf("Contents of the file are\n\n");
    while((ch=fgetc(fp))!=EOF)
    {
        putchar(ch);
        if((ch=='#include<stdio.h>
                int main()
    {
        while(1)
            {
                char str[20], *pt;
                int i = 0;
                printf(" [ Calculating length of \nthe string using a pointer ]\n\n");
                printf("Enter string [below 20 chars] : ");
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
        } ')||(ch=='\n'))
        {
            words++;
        }
    }
    fclose(fp);
    printf("\n\nTotal Number of Words = %d",words+1);
    return 0;
}
