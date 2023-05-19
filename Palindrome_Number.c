#include<stdio.h>
int main()
{
    int t,j,rev=0;
    scanf("%d",&t);
    for(j=1;j<=t;j++)
    {
        int n,r,rev=0,temp;
        scanf("%d",&n);
        temp=n;
        while(temp>0)
        {
            r=temp%10;
            rev=(rev*10)+r;
            temp=temp/10;
          }
            if(n==rev)
            {
                printf("True");
            }
            else
            {
                printf("False");
            }
            printf("
");
            
    }
    
}