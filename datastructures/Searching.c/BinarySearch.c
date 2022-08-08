#include <stdio.h>

int main(){
    int a[10] = {3,17,26,38,45,52,61,77,89,90} ;
    int data  ;
    printf("Enter your element: \t");
    scanf("%d",&data) ;

    //...........................................
    int left = 0;
    int right = 9;

    while(left <= right){
    int mid = (left+right)/2   ;
    if(data == a[mid]){
        printf("Element is at index :%d",mid) ;
        break ;
    }
    else if(data > a[mid]){
        left = mid+1 ;
    }
    else if(data < a[mid]){
        right = mid-1 ;
    }
    }

    if(left > right){
        printf("Element is not there in list") ;
    }
}
