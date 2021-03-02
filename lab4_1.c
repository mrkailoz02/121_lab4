#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n][3];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int max=0,min=2000,lmax=0,lmin=0,sum=0;
    for(int i=0;i<n-2;i++)
    {
        for(int j=i;j<i+3;j++)
        {
            sum+=(a[j][0]*4)+(a[j][1]*2)+(a[j][2]*1);
        }
        if(max<sum)
        {
            max=sum;
            lmax=i;
        }
        if(min>sum)
        {
            min=sum;
            lmin=i;
        }
        sum=0;
    }
    printf("%d %d",lmax+1,lmin+1);
}
