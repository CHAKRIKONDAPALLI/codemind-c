#include<stdio.h>
int main()
{
    int a,b,c,s=0,p=1;
    scanf("%d",&a);
    while(a)
    {
        b=a%10;
        s=s+b;
        p=p*b;
        a=a/10;
    }
    if(s==p)
    printf("Spy Number");
    else
    printf("Not Spy Number");
}