#include <stdio.h>

int sums(int a){
    if (a >0){
        return a + sums(a-1) ;
    }
    else{
        return a ;
    }
};

int main(){
    int num;
    scanf("%d",&num);
    int results = sums(num);
    printf("%d",results);
};