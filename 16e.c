#include<stdio.h>
int main()
{
    int i,j,sum=0;
    int a[3][3]={1,2,3,4,5,6,7,8,9};
    int c;

    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
           sum=(a[2][0]+a[1][1]+a[0][2]);
        }
        c=sum;
    }
    printf("%d ",c);
    return 0;
}