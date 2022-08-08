#include <stdio.h>

char prime_or_composite(int a){
    int check = 0;
   for(int i =2;i<a;i++){
       if (a%i==0){
           check += 1 ;
       };
   };

   if (check == 0){
       printf("its an prime number");
   }
   else {
       printf("its an composite number");
   };
};

int main(){
    int num;
    scanf("%d",&num);
    prime_or_composite(num);

    return 0;
}

