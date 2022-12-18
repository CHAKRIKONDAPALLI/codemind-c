#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n!=0)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        int s=a+b;
        printf("%d
",s);
        n--;
    }
}