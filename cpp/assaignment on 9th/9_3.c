#include <stdio.h>
#include <string.h>

int main(){
    char string[100];
    scanf("%s",&string);
    int len = 0;
    for(int i=0; string[i]!='\0';i++){
         len = i;
    }
    for(int i=0; string[i]!='\0';i++){
        printf("%c",string[len+1-i-1]);
    };
    
    return 0;
}