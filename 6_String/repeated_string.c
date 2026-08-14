#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    char str[]="abbaabba";
    int size=strlen(str);
    bool flag=true;
    for(int i=0;i<size/2;i++)
    {
        if(str[i]!=str[size/2+i])
        {
            flag=false;
            break;
        }
    }
    if(flag)
    {
        printf("Repeated String ");
    }
    else printf("NOT Repeated String ");
    return 0;
}
