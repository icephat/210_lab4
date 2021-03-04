#include<stdio.h>
int main()
{
    int i,n,j,m=0,max=0,mi=2000,min=0,sum=0;
    scanf("%d",&n);
    int a[n][3];
    for(i=0;i<n;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n-2;i++)
    {
        for(j=i;j<i+3;j++)
        {
            sum+=(a[j][0]*4)+(a[j][1]*2)+(a[j][2]*1);
        }

    }





    return 0;
}
