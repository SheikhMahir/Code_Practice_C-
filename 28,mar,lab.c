#include<stdio.h>
struct person
{
    char name[10];
    int id;
    char cat[5];
    int salary;
};
int main(){
    struct person p1[6];
    for (int i=0; i<2; i++)
    {
        scanf("%s",p1[i].name);
        scanf("%d",& p1[i].id);
        scanf("%s",p1[i].cat);
        scanf("%d",& p1[i].salary);
    }
    for (int i=0; i<6; i++)
    {
        if (p1[i].cat[0]=='H'&&p1[i].cat[1]=='R')
        {
            printf("bye bye World...");
        }
    }
getch();
}
