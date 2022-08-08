#include <stdio.h>

int merge(int a[10],int lb,int mid,int ub){

    
}



int mergesort(int a[10],int lb,int ub){
    if(lb<ub){
    int mid = (lb + ub)/2 ;
    mergesort(a, lb,mid) ;
    mergesort(a,mid+1,ub) ;
    merge(a,lb,mid,ub) ; 
    }
}