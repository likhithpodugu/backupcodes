#include <stdio.h>

int main(){
    char sen[50];
    fgets(sen,50,stdin);
    printf("%s",sen);
    return 0;
}