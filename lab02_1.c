#include <stdio.h>


int main(){
    int k,x = 2;
    printf ( " Enternumber:  "); 
    scanf("%d", &k);
    printf ( " FactoringResult:  ");
    while(k != 1){
        while(k % x == 0){
            printf(" %d",x);
            k = k / x;
            if(k!=1)
                printf(" 🅧 ");
        }
        x++;
    }

   
    return 0;
}

