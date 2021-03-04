#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char a[200]={};
    gets(a);
    for(i=0;i<=strlen(a);i++)
    {
        if(a[i]!=a[i+1])
        {
            printf("%c",a[i+1]);
        }
    }



    return 0;
}
