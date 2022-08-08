#include <stdio.h>

int sqr(int a){
    int b = a * a;
    return b;
};

int main(){
    int num;
    scanf("%d",&num);
    int square_num = sqr(num);
    printf("Square of an %d is %d",num,square_num);
    return 0;
}

