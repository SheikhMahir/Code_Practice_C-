#include<stdio.h>
#include<string.h>
int main()
{

    char line [20] [100];
    char fname [100];
    FILE *fptr=NULL;

    int i=0, total=0;
    printf("Read the file name \n");
    scanf("%s", fname);
    fptr=fopen(fname, "r");

    while (fgets (line [i], 100, fptr))
    {
        line[i][strlen(line[i])-1] = '\0';

        i++;

    }
    total=i;
    printf("\n printing the content of the File\n");
    for (i=0; i<total; i++)
        printf("%s\n", line [i]);
    getch();
}
