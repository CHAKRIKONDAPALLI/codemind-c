#include<stdio.h>
int main()
{
    int n,dr,hr;
    scanf("%d",&n);
    if(n<=10000)
    {
        dr=(80*(n))/100;
        hr=(20*(n))/100;
    }
    else if(n<=20000)
    {
        dr=(90*(n))/100;
        hr=(25*(n))/100;
    }
    else if(n>20000)
    {
        dr=(95*(n))/100;
        hr=(30*(n))/100;
    }
    float gross=n+dr+hr;
    printf("%0.2f",gross);
}