#include<stdio.h>
int main()
{
    int n,i=0;
    scanf("%d",&n);
    while(n!=0)
    {
        int r=n%10;
        if(i<r)
        {
            i=r;
        }
        n=n/10;
    }
    printf("%d",i);
}