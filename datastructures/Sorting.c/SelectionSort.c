#include <stdio.h>

int main(){
    int a[10] = {3,18,98,65,24,86,12,75,45,31} ;
    int n = 10 ;
    int temp ;
    int min ;
    for(int i = 0;i<n-1;i++){
        min = i ;
        for(int j = i+1;j<n;j++){
            if(a[j] < a[min]){
                min = j ;
            }
        }
         if(min!=i){
            temp = a[i] ;
            a[i] = a[min] ;
            a[min] = temp ;
        }
    }

    for(int k = 0;k<10 ;k++){
        printf("%d\t",a[k]);
    }
}