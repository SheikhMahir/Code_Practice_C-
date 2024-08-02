#include<stdio.h>
int main()
{
    while(1){
    int c;
    float x,y;
    printf("Temperature Converter Menu\n");
    printf("1. Fahrenheit to Celsius\n");
    printf("2. Celsius to Fahrenheit\n");
    printf("Please input ur Action : ");
    scanf("%d",&c);

    switch(c)
    {
    case 1:
    {
        printf("Please enter Fahrenheit unit :");
        scanf("%f",&x);
        y =(x-32)/1.8;
        printf("It's %.3f degree Celsius.\n",y);
        break;
    }
    case 2:
    {
        printf("Please enter Celcious unit :");
        scanf("%f",&y);
        x =(y*1.8)+32;
        printf("It's %.3f degree Fahrenheit.\n",x);
    }
    }
    }
    getch();
}
