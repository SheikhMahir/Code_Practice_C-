#include<stdio.h>
int main()
{
    while(1)
    {
        double x,y;
        char o;
        printf("Enter ur calculation : [Example 2+2 & press enter]\n");
        scanf("%lf %c %lf",&x,&o,&y);

        switch(o)
        {
        case '+':
        {
            printf("%.2lf + %.2lf = %.2lf\n\n",x,y,x+y);
            break;
        }
        case '-':
        {
            printf("%.2lf - %.2lf = %.2lf\n\n",x,y,x-y);
            break;
        }
        case '*':
        {
            printf("%.2lf x %.2lf = %.2lf\n\n",x,y,x*y);
            break;
        }
        case '/':
        {
            printf("%.2lf / %.2lf = %.2lf\n\n",x,y,x/y);
            break;
        }
        }
        getch();
    }
}
