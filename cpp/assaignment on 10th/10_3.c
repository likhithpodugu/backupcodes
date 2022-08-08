#include <stdio.h>

char check(int a){
    if (a%2==0){
        printf("Even Number");
    }
    else {
        printf("Odd Number");
    };
    return 0;
};

int main(){
    int num;
    scanf("%d",&num);
    check(num);

    return 0;
}

