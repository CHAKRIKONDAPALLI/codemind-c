#include<stdio.h>
int main()
{
    
    int n,x,i,mul;
    scanf("%d%d",&n,&x);
    for(i=1;i<=x;i++)
    {
        if(i%2!=0)
        {
            mul=n*i;
            printf("%d x %d = %d
",n,i,mul);
        }
    }
}