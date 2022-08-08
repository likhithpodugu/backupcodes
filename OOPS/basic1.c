#include <stdio.h>
int main(){
    int a;
    int i;
    scanf("Enter a num: %d",&a);
    for (i=a;i<=a ;i--){
    if (i%2==0 && i>0){
    printf("%d is even",i) ;
    }
    else if(i%2!=0 && i>0){
    printf("%d is odd",i) ;
    };
    };
};