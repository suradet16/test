#include <stdio.h>  
 
int main()  
{  
   
    int n1, n2, i, GCD_Num;  
    printf ( " Enter first number:  "); 
    scanf ( "%d", &n1);  
    printf ( " Enter second number:  ");
    scanf ( "%d", &n2);     
      
      
    for( i = 1; i <= n1 && i <= n2; ++i)  
    {  
        if (n1 % i ==0 && n2 % i == 0)  
            GCD_Num = i; 
    }  
  
    printf (" Greatest common divisor of two numbers %d and %d is %d.\n", n1, n2, GCD_Num);
    return 0;  
}  