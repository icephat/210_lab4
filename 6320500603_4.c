#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char a[1000],b[11][5]={"i","of","the","on","at","for","with","a","an","in","and"};
    char *s;
    int i=0,j=0,k=0;
    scanf("%[^\n]s",s);
    s=strtok(s," ");
    while(s!=NULL)
    {
        for(;j<11;j++)
        {
            if(strcmp(s,b[j]))
            {
                k++;
            }
        }
    }





    return 0;
}
