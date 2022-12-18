#include<stdio.h>
int main()
{
    int n,r,s=0;
    scanf("%d",&n);
    int h=n*n;
    while(n!=0)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    int k=s*s;
    int t,u=0;
    int f=k;
    while(f!=0)
    {
        t=f%10;
        u=u*10+t;
        f=f/10;
    }
    if(h==u)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}