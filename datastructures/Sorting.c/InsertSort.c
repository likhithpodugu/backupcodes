#include <stdio.h>

int main(){
    int a[5] = {27,31,54,74,11} ;

    //.....................................
    int temp ,j ;
    for(int i = 1; i<5;i++){
        temp = a[i];
        for( j = i -1; j>=0 ; j--){
            if(a[j] > temp){
            a[j+1] = a[j] ;
             a[j] = temp ;
            }
        }
    }
    
        for(int k = 0;k<5;k++){
        printf("%d\t",a[k]);
    }
}
