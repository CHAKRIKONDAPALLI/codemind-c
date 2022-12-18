#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if(ch=='a'||ch=='i'||ch=='o'||ch=='u'||ch=='e')
    {
        printf("VOWEL");
    }
    else
    {
        printf("CONSONANT");
    }
}