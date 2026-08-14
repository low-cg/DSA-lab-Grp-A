#include<stdio.h>
#include<string.h>
int main()
{
    char str[]="Sylhet Engineering Collge,Sylhet";
    int size=strlen(str);
    for(int i=0;i<size;i++)
    {
        printf("%c",str[i]);
    }
    return 0;
}
