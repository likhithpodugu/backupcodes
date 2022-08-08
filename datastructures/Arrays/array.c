#include <stdio.h>

int main(){
    int a[10] = {1,2,3,4,4,5} ;
    int n ;
    n = sizeof(a) / 4 ;
    printf("%d",n) ;
}