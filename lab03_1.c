#include<stdio.h>  
 int main()    
{    
int n,sum=0,m,o,sum2=0;    
printf("Enter a number:");    
scanf("%d",&n);    
while(n>0)    
{    
m=n%10;    
sum=sum+m;    
n=n/10;    
}
while(sum>0)
{
    o=sum%10;
    sum2=sum2+o;
    sum=sum/10;

}    
printf("Sum is=%d",sum2);    
return 0;  
}   