#include<stdio.h>
void main()
{
    FILE *p;
    char ch;
    int w=1;
    p=fopen("c:\\introduce.txt","r");
    if(p==NULL)
    {
        printf("file not found");
    }
    else
    {
        ch=fgetc(p);
        while(ch!=EOF)
        {
            printf("%c",ch);
            if(ch==' '||ch=='\n')
            {
                w++;
            }
            ch=fgetc(p);
        }
        printf("\nWords in a file are = %d",w);
    }
    fclose(p);
    getch();
}
