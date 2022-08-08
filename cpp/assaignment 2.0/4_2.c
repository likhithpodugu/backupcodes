#include <stdio.h>
#include <string.h>

int main(void){
int count = 0;
int array[10] = {'1','2','3','4','2','3','7','4','2'};

for(int i=0; i<10; i++){
    for(int j=1; j<=10;j++){
if(array[i]==array[j]){
    count++;
};
    };
};

printf("count = %d\n", count);
return 0;}