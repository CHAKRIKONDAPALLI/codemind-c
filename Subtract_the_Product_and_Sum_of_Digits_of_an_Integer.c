#include<stdio.h>
int main()
{
    int n,p=1,s=0;
    scanf("%d",&n);
    int h=n;
    while(h!=0)
    {
        int r=h%10;
        p=p*r;
        s=s+r;
        h=h/10;
    }
    int w=p-s;
    printf("%d",w);
}