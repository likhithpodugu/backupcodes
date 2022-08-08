#include <stdio.h>

int main(){
    int n = 5 ;
    int a[5] = {71,90,45,36,18} ;
    int k,flag;

    for(int i =0;i<n-1;i++){
        for(int j = 0;j<n-1-i;j++){
            if(a[j] > a[j+1]){
                k = a[j] ;
                a[j] = a[j+1];
                a[j+1] = k ;
                flag = 1 ;
            }
        }
        if(flag == 0){                  //if we  get elements in ascending order then  
            break; 
        }
    }

    for(int k = 0;k<n;k++){
        printf("%d\t",a[k]);
    }
}