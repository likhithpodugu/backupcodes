#include <stdio.h>

int natural_nums(int a){
    if(a>0){
        printf("%d\n",a);
        natural_nums(a -1);
    }
    else{
        printf("\n");
    }

};

int main(){
    int num ;
    scanf("%d",&num);
    natural_nums(num);
};