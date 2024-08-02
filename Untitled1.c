#include<stdio.h>
int main ()
{
    char s1[]="My name is";
    char s2[]=" Mikat.";
    strcat(s1,s2);
    printf("%s",s1);

    getch();
}
