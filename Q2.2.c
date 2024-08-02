#include<stdio.h>
struct student
{
    char name[20];
    int id;
};
typedef struct student user;
int main()
{
    user Mikat;
call(&Mikat);

}
void call(user *adress)
{
     printf("[Function to pass a structure \n  using call by reference.  ]\n\n");

        printf("Please enter student name  : ");
        scanf("%[^\n]%*c", &adress->name);
        printf("Last 4 digit of student ID : ");
        scanf("%d",&adress->id);
        printf("\nStudent Name               : %s\n", adress->name);
        printf("Last 4 digit of student ID : %d\n\n", adress->id);
        getch();
}
