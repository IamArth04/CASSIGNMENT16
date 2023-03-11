#include<stdio.h>
int main()
{
    int i,j,sum=0;
    int a[3][3]={1,2,3,4,5,6,7,8,9};
   
    int c[3][3];

    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
           if(i>j)
           {
              a[i][j]=0;
           }
           c[i][j]=a[i][j];
        }
        
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