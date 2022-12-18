#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    scanf("%d:%d",&a,&b);
    float h,m;
    h=abs((30*a)-(5.5*b));
    m=360-h;
    if(h<m)
    {
        printf("%0.1f",h);
    }
    else
    {
        printf("%0.1f",m);
    }
}