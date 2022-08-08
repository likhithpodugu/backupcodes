#include <stdio.h>

int main(){
    char string[100];
    scanf("%s",&string);
    int sum = 0;
    for(int i=0; string[i]!='\0';i++){
         sum = i;
    };
    printf("length of string is %d",sum+1);
    return 0;
}