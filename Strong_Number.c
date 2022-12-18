#include<stdio.h>
int main()
{
    int n,s=0;
    scanf("%d",&n);
    int h=n;
    while(h!=0)
    {
        int r=h%10;
        int p=1;
        for(int i=1;i<=r;i++)
        {
            p=p*i;
        }
        s=s+p;
        h=h/10;
    }
    if(s==n)
    {
        printf("The number %d is a strong number",n);
    }
    else
    {
        printf("The number %d is not a strong number",n);
    }
}