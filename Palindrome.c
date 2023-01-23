#include<stdio.h>
int main()
{
    int a,s=0,r,b,c;
    scanf("%d",&a);
    b=a;
    while(b!=0)
    {
        r=b%10;
        s=s*10+r;
        b=b/10;
    }
    if(s==a)
    {
        printf("True");
    }
    else
    printf("False");
}