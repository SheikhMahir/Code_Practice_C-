#include<stdio.h>
struct player
{
    int id,damage,totale;
};
int main()
{
    struct player p[2];
            p[0].totale=0;
            p[1].totale=0;
            p[2].totale=0;
    for(int i = 0; i<1; i++)
    {
        for(int j = 0; j<3; j++)
        {
            scanf("%d", &p[0].damage);//1
            scanf("%d", &p[1].damage);//2
            scanf("%d", &p[2].damage);//3


            p[0].totale=p[0].totale+p[0].damage;
            p[1].totale=p[1].totale+p[1].damage;
            p[2].totale=p[2].totale+p[2].damage;
        }
    }
    printf("%d\n%d\n%d",p[0].totale,p[1].totale,p[2].totale);
    getch();
}
