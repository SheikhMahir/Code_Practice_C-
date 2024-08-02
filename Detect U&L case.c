#include<stdio.h>
int main()
{
    char x;
    printf("Please enter a Letter : ");
    scanf("%c",&x);

    if(x>='a' && x<='z')
        printf("It's a small letter.");
    else if(x>='A' && x<='Z')
        printf("It's a Capital letter.");
    else
        printf("It's not a letter.");
    getch();
}
