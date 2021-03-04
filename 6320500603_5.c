#include<stdio.h>
int main()
{
    int i,j,n,a[4],x,y;
    char s[100];
    scanf("%d",&n);
    a[0]=1;
    for(i=0;i<n;i++)
    {
        a[0]=1;
        scanf("%s",&s);
        for(j=0;j<strlen(s);j++)
        {
            if(s[j]=='A')
            {
                x=a[0];
                a[0]=a[3];
                a[3]=x;
            }
            else if(s[j]=='B')
            {
                x = a[0];
                a[0] = a[3];
                a[3] = x;
            }
            else if(s[j]=='C')
            {
                x = a[0];
                a[0] = a[2];
                a[2] = x;
                y = a[1];
                a[1] = a[3];
                a[3] = y;
            }
            else if(s[j]=='D')
            {
                x = a[0];
                a[0] = a[1];
                a[1] = x;
                y = a[2];
                a[2] = a[3];
                a[3] = y;
            }
            else if(s[j]=='E')
            {
                x = a[0];
                a[0] = a[3];
                a[3] = x;
                y = a[2];
                a[2] = a[1];
                a[1] = y;
            }
        }


    return 0;
}
