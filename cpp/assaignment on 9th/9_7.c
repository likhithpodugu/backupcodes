#include <stdio.h>
#include <string.h>

int main(){
    char str[25];
    scanf("%s",&str);
    char strc[25];
    strcpy(strc,str);
    printf("%s",strc);
    return 0;
}