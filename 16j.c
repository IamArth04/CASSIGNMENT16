#include<stdio.h>
int main()
{
    int i,j,max=0,sum=0,index=0;
    int a[3][3]={1,2,3,4,5,1,7,1,9};
    int c;

    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            if(a[i][j]==1)
            {
                sum=a[i][j]+sum;
            }
        }
        if(sum>max){
            max=sum;
            index=i;
        }
    }
    printf("%d ",max);
    return 0;
}