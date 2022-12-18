#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    int p=(a+2*(c))*(b+2*(c))-(a*b);
    int area=p*d;
    printf("%d",area);
}