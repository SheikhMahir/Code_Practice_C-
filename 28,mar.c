#include<stdio.h>
struct person
{
    char name[100];
    int age;
    int salary;
};
int main(){
    struct person p1[30];
    for (int i=0; i<30; i++)
    {
        scanf("%c",p1[i].name);
        scanf("%d",& p1[i].age);
        scanf("%d",& p1[i].salary);
    }
}
