#include <stdio.h>

int main(void){
int i,n,sum;
sum = 0;
i = 1;
printf("Number = ");
scanf("%d",&n);
printf("Even numbers upto %d are :-\n",n);
while(i <= n){
    if (i%2==0){
        printf("%d\n",i);
        sum = sum + i ;
    }
i++;
};
printf("Sum = %d\n",sum);
    return 0;
}