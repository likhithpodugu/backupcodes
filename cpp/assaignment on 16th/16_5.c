#include <stdio.h>

int add(int *a,int *b);

int main(){
    int num1;
    scanf("%d",&num1);
    int num2;
    scanf("%d",&num2);
    int *aa;
    int *bb;
    aa = &num1;
    bb = &num2;
    add(aa,bb);

    return 0;
}

int add(int *a,int *b){
    int sum;
    sum = *a + *b ;
    printf("%d",sum);
}