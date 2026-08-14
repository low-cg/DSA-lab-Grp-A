#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    char str[]="abba";
    int size=strlen(str);
    bool flag=true;
    for(int i=0;i<size/2;i++)
    {
        if(str[i]!=str[size-i-1])
        {
            flag=false;
            break;
        }
    }
    if(flag)
    {
        printf("Palindrome");
    }
    else printf("NOT Palindrome");
    return 0;
}
