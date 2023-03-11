#include<stdio.h>
int main()
{
    int i,j,k,count=0;
    int a[3][3]={1,0,0,4,0,3,0,0,0};
    int c;

    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            if(a[i][j]==0)
            count++;
           
        }
        
    }
    if(count>((2*2))/2)
    {
            printf("Sparse");
    }
    else
    {
            printf("Dense");
    }
    
    return 0;
}