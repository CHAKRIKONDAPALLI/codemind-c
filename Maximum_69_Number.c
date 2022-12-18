#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int h=n,c=0,d,f,i,r;
    while(h!=0)
    {
        c++;
        h=h/10;
    }
    d=c;
    f=c;
    int a[c];
    for(i=c;i>=1;i--)
    {
        r=n%10;
        a[i]=r;
        n=n/10;
    }
    for(i=1;i<=d;i++)
    {
        if(a[i]==6)
        {
            a[i]=9;
            break;
        }
    }
    for(i=1;i<=f;i++)
    {
        printf("%d",a[i]);
    }
}