#include<stdio.h>
int main()
{
    int x=10, y=20;
    int sum,sub,another_sum,s;
    //sum =
     for_sum(x,y);
    sub = call_another(x,y);
    printf("%d\n", sum);
    printf("%d\n", sub);
    int p=10000, j= 40000000,i=100000000;
    int t=2000000;
   // another_sum = for_sum(p,t);
    printf("%d", another_sum);
    s = for_sum(i,j);
    printf("\n %d\n",s);


}
void for_sum(int q,int o)
{
    int f = q+o;
    printf("hjjksdhs =%d", f);
    //return f;

    printf("Number :");
    int n;
    scanf("%d", &n);
    sum(n);
}
int call_another(int s, int p)
{
    int sub = p-s;
    return sub;
}
int sum(int n)
{
    int sum_all;
    while(n!=0)
    {
        sum_all = n+sum(n-1);
    }
    printf("sum = %d", sum_all);

}

