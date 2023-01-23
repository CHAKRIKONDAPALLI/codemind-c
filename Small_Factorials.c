#include<stdio.h>
int main()
{
    int a,i,c,k=1,n,j;
    scanf("%d",&n);
    for(j=1;j<=n;j++)
    {
        k=1;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
     {
         k=k*i;
     }
     printf("%d
",k);
    }
}