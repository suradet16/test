#include<stdio.h>  
 int main()    
{    
long long n,sum=0,m,o,sum2=0;    
printf("Enter a number: ");    
scanf("%lld",&n);    
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
printf("Sum is= %lld",sum2);    
return 0;  
}   