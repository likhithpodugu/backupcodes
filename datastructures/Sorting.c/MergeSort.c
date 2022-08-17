#include <stdio.h>

void merge(int a[10],int lb,int mid,int ub){
    int i = lb ;
    int j = mid + 1 ;
    int k = lb ;
    int  b[10] ;
    while(i<=mid && j<=ub){
        if(a[i]<=a[j]){
            b[k] = a[i] ;
            i++ ;
            k++ ; 
        }
        else{
            b[k] = a[j] ;
            j++ ;
            k++ ;
        }
    }
    if(i>mid){
        while(j<=ub){
            b[k] = a[j] ;
            j++ ;
            k++ ;
        }
    }
    else{
        while(i<=mid){
            b[k] = a[i] ;
            i++ ;
            k++ ;
        }
    }
    for(int s = lb;s<=ub;s++){
        a[s] = b[s] ;
    }
}

void mergesort(int a[10],int lb,int ub){
    if(lb<ub){
        int mid = (lb+ub)/2;
        mergesort(a,lb,mid) ;
        mergesort(a,mid+1,ub) ; 
        merge(a,lb,mid,ub) ;
        }
}

int main(){
    int a[10] = {19,13,22,55,66,11,53,12,38,77} ;
    mergesort(a,0,9) ;
    
    for(int i = 0;i<10;i++){
        printf("%d\t",a[i]) ;
    }
}
