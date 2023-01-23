#include<stdio.h>
int main()
{
    int a,b,c,i,s;
    scanf("%d",&a);
    i=a;
    back:
    s=0;
    while(i!=0)
           {
                b=i%10;
                s=s+b;
                i=i/10;
           }
           if(s>=10)
           {
               i=s;
              goto  back;
           }
           else
           {
               printf("%d",s);
           }
}