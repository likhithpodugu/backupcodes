#include <stdio.h>

int swap(int *a,int *b);

int main(){
    int num1;
    int num2;
    scanf("%d %d",&num1,&num2);
    int *ptr1; 
    ptr1 = &num1;
    int *ptr2;
    ptr2 = &num2;
    printf("BEFORE SWAP\n");
    printf("Num1 = %d\nNum2 = %d\n",*ptr1,*ptr2);
    swap(ptr1,ptr2);
    printf("AFTER SWAP\n");
    printf("Num1 = %d\nNum2 = %d\n",*ptr1,*ptr2);
    return 0;
}

int swap(int *a,int*b){
    int an;
    an = *a;
    *a = *b;
    *b = an;
    return *a,*b;
}