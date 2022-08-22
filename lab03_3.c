#include <stdio.h>  
  
int main()  
{  
    int n,m=1;  
    printf("Enter the number of rows");  
    scanf("%d",&n);  
    for(int i=0;i<n-1;i++)  
    {  
        for(int j=0;j<=i;j++)  
        {  
          printf("*");  
        }  
        for(int j=0;j<((n-2)*2)+1 - 2*i;j++)  
        {  
            printf(" ");  
        }  
        for(int j=0;j<=i;j++)
        {  
          printf("*");  
        }  
       
        printf("\n");  
    
        
    }  
    for(int i=0;i<2*n-1;i++)
        {  
          printf("*");  
        }  
      printf("\n"); 
    for(int i=0;i<n-1;i++)  
      {  
          for(int j=n-1;j>i;j--)  
          {  
            printf("*");  
          } 
          for(int j=0;j<2*i+1;j++)  
        {  
            printf(" ");  
        }  
        for(int j=n-1;j>i;j--)  
          {  
            printf("*");  
          } 

          printf("\n");
      }   

    return 0;  
}  
