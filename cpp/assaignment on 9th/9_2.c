#include <stdio.h>

int main(){
    char string[100];
    scanf("%s",&string);
    for(int i=0; string[i]!='\0';i++){
        printf("%c\t",string[i]);
    };
    
    return 0;
}