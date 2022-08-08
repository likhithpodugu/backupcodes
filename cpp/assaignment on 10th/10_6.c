#include <stdio.h>

char prime_or_composite(int a){
    int check = 0;
    int j = 0;

    while (a>0){
         for(int i =2;i<a;i++){
            if (a%i==0){
             check += 1 ;
             }
            else{
                continue;
            }; 
   };
        if (check == 0){
            printf("%d",a);
        };
        a = a - 1 ;
    };
};

int main(){
    int num;
    scanf("%d",&num);
    prime_or_composite(num);

    return 0;
};