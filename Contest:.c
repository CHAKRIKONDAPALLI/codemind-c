#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int e=b*1;
    int k=c*2;
    int i=e+k;
    if(i>=a)
    {
        printf("Qualify");
    }
    else
    {
        printf("Not Qualify");
    }
}