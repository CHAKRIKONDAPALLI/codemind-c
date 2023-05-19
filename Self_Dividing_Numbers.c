#include<stdio.h>
int main()
{
    int a,b,i;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        int count=0,count1=0,temp,r;
        temp=i;
        while(temp>0)
        {
            r=temp%10;
            count++;
            if(r>0)
            {
             if(i%r==0)
             {
                 count1++;
             }
            }
            temp=temp/10;
        }
        if(count==count1)
        {
            printf("%d ",i);
        }
    }
}