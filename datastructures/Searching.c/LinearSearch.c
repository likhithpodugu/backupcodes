#include <stdio.h>

int main(){
    int a[10] = {12,41,63,34,66,24,77,12,82,92} ;
    int data ;
    printf("Enter your element : \n") ;
    scanf("%d",&data);

    int flag = 0;
    for(int i = 0;i<10;i++){
        if(a[i] == data){
            printf("Element in index %d",i);
            flag = 1 ;
        }
    }

    if(flag == 0){
        printf("Element is not there in list") ;
    }
}