#include<stdio.h>
int main()
{
    float a,b,c,d,e;
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
    if(a>35&&b>35&&c>35&&d>35&&e>35)
    {
        printf("PASSED");
    }
    else
    {
        printf("FAILED");
    }
}