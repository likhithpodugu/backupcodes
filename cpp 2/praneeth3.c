#include <stdio.h>
#include <math.h>
int main(){
    int num1 ;
    int num2 ;
    scanf("%d",&num1);
    scanf("%d",&num2);
    if(num1 >0 && num2<100){
        for(int i = num1;i<=num2 ;i++){
            printf("%f\n",sqrt(i));
        };
    }
    else{
        printf("PROGRAM HAS ERROR") ;
    };
};