#include<stdio.h>
struct player
{
    int id,damage,totale;
};
int main()
{
    struct player p[2];
    for(int i = 0; i<2; i++)
    {
        for(int j = 0; j<3; j++)
        {
            scanf("%d", &p[0].damage);
            scanf("%d", &p[1].damage);
            scanf("%d", &p[2].damage);
            p[0].totale=p[0].totale+p[0].damage;
            p[1].totale=p[1].totale+p[1].damage;
            p[2].totale=p[2].totale+p[2].damage;
        }
    }
    getch();
}
