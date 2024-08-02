#include<stdio.h>
int main()
{
    while(1)
    {
        char line[20][100];
        char fname[100];
        FILE*fptr = NULL;
        int i = 0, total = 0;

        printf("Read the file name\n");
        scanf("%s",&fname);
        fptr=fopen,(fname,"r");
        while(fgets(line[i],100,fptr)){
            line[i][strlen(line[i])-1='\0';
            i++;
        }
        total=i;
        printf("\nprinting the content of the file\n");
        for (i=0; i<totale; i)
        getch();
    }
}
