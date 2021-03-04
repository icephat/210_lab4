#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char a[1000],b[11][5]={"i","of","the","on","at","for","with","a","an","in","and"};
    char *s;
    int i=0,j,k=0;
    scanf("%[^\n]s",a);
    s=strtok(a," ");
    while(s!=NULL)
    {
        for(j=0;j<11;j++)
        {
            if(strcmp(s,b[j]))
            {
                k++;
            }
        }
        if(k==11||i==0)
        {
            printf("%c",toupper(s[0]));
        }
        s=strtok(NULL," ");
        i++,k=0;
    }
    return 0;
}
