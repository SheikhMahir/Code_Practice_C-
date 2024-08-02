#include<stdio.h>
int main()
{
    char x;
    printf("Please enter a Letter : ");
    scanf("%c",&x);

    if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u'||x=='A'||x=='E'||x=='I'||x=='O'||x=='U')
        printf("It's a vowel.");

    else
        printf("it's a consonant.");

    getch();
}
