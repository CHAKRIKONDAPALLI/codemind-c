#include<stdio.h>
int main()
{
    int n,c=0;
    scanf("%d",&n);
    int h=n;
    for(int i=1;i<=n;i++)
    {
        int s=0;
        if(n%i==0)
        {
            for(int j=1;j<n;j++)
            {
                if(i%j==0)
                {
                    s++;
                }
            }
            if(s!=2)
            {
                c++;
            }
        }
    }
    printf("%d",c);
}