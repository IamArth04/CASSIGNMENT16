#include<stdio.h>
int main()
{
    int i,j,sum=0,ums=0,mus=0,col=0,loc=0,clo=0;
    int a[3][3]={1,2,3,4,5,6,7,8,9};
    int d,b,c,m,n,o;

    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
           sum=(a[0][0]+a[0][1]+a[0][2]);
           ums=(a[1][0]+a[1][1]+a[1][2]);
           mus=(a[2][0]+a[2][1]+a[2][2]);

           col=(a[0][0]+a[1][0]+a[2][0]);
           loc=(a[0][1]+a[1][1]+a[2][1]);
           clo=(a[0][2]+a[1][2]+a[2][2]);
        }
        d=sum;
        b=ums;
        c=mus;

        m=col;
        n=ums;
        o=clo;
    }
    printf("Sum of 1st row is %d and 2nd row is %d and 3rd row is %d",d,b,c);
    printf("\n");
    printf("Sum of 1st col is %d and 2nd col is %d and 3rd col is %d",m,n,o);
    return 0;
}