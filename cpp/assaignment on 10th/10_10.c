#include <stdio.h>

int check(int a){
    if(a%2==0 && a>1){
        printf("%d is an even number\n",a);
    }
    else if(a%2!=0 && a>1){
        printf("%d is an odd number\n",a);
    }
    else if(a==1){
        printf("%d is an neither odd nor even",a);
    };
    check(a-1);
};

int main(){
    int num;
    scanf("%d",&num);
    check(num);
};