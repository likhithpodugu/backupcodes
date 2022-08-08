#include <stdio.h>

int max(int *a,int *b);

int main()
{
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    int *aa,*bb ;
    aa = &num1;
    bb = &num2;
    max(aa,bb);
    return 0;
}

int max(int *a,int *b){
    if(*a>*b){
        printf("Maximum number amoung two was %d",*a);
    }
    else{
        printf("Maximum number amoung two was %d",*b);
    };
}