#include <stdio.h>

int bin(int a){
    int i = 0;
    int num = a;
    int aaa[10];
    while(num>0){
        if (num%2==0){
            aaa[i] = num%2 ;
            num = num/2 ;
        }
        else{
            aaa[i] = num%2 ;
            num = (num-1)/2 ;
        };
        i++ ;
    };

    for(i=i-1;i>=0;i){
        printf("%d",aaa[i]);
    };
};

int main(){
    int number;
    scanf("%d",&number);
    bin(number);
};