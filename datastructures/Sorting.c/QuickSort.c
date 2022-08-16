#include <stdio.h>


int partesian(int a[10] , int lb , int ub){
    int pivot = a[lb] ;
    int start = lb ;
    int end = ub ;
    int k ;

while(start<end){
    while(a[start] <= pivot){
        start++  ;
    };
    while(a[end] > pivot){
        end-- ;
    }
    if(start<end){
        k = a[start] ;
        a[start] = a[end] ;
        a[end] = k ;
    }
}
k = a[lb];
a[lb] = a[end] ;
a[end] = k ;

return end ;
}

void quicksort(int a[10],int lb,int ub){
    if(lb<ub){
        int loc ;
        loc = partesian(a , lb,ub) ;
        quicksort(a,lb,loc-1);
        quicksort(a,loc+1,ub) ;
    }
}

int main(){
    int a[10] = {34,11,97,66,87,34,20,28,18,100} ;
    quicksort(a,0,8) ;


    for (int i = 0;i<10;i++){
        printf("%d\t",a[i]) ;
    }
}
