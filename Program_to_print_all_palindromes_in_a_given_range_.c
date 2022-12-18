#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    for(int i=a;i<=b;i++)
    {
        if(i<=9)
        {
            printf("%d ",i);
        }
        else
        {
            int r,s=0,k=i;
            while(k!=0)
            {
                r=k%10;
                s=s*10+r;
                k=k/10;
            }
            if(s==i)
            {
                printf("%d ",i);
            }
        }
    }
}