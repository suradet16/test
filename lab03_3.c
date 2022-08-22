#include<stdio.h>
int main()
{
    int n,i,j,k;
    printf("Enter even no:");
    scanf("%d",&n);
    for(j=0;j<n/2;j++)
    {
        for(i=0;i<j+1;i++)
        printf("* ");
        for(k=0;k<(n-2)-2*j;k++)
        printf("  ");
        for(i=0;i<j+1;i++)
        printf("* ");
        printf("\n");
    }
    for(j=0;j<n/2;j++)
    {
        for(i=0;i<n/2-j;i++)
        printf("* ");
        for(k=0;k<2*j;k++)
        printf("  ");
         for(i=0;i<n/2-j;i++)
        printf("* ");
        printf("\n");
    }
}