#include <stdio.h>

int main(void){
int i,n;
i = 0;
n = 15;
printf("Odd numbers upto %d are :-\n",n);
while(i <= n){
    if (i%2!=0){
        printf("%d\n",i);
    }
i++;
};
    return 0;
}