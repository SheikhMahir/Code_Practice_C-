#include<stdio.h>
int main()
{
    char x;
    printf("Please enter a Letter : ");
    scanf("%ch",&x);

    switch(x)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("It's a Vowel.");
        break;
    case 'w':
    case 'W':
    case 'y':
    case 'Y':
        printf("It's a Semi Vowel.");
        break;
    default:
        printf("It's a Consonant.");
    }
    getch();
}
