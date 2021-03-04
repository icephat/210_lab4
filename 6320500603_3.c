#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char a[200]={};
    gets(a);
    for(i=0;i<=strlen(a);i++)
    {
        if(a[i-1]!=a[i])
        {
            printf("%c",a[i]);
        }
    }



    return 0;
}
