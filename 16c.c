#include<stdio.h>
int main()
{
    int i,j;
    int a[3][3]={1,2,3,4,5,6,7,8,9};
    int b[3][3];
    int c[3][3];

    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            c[i][j]=a[j][i];
        }
        b[i][j]=c[i][j];
    }
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
           
     }
    return 0;
}