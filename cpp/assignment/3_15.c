#include <stdio.h>
#include <math.h>

int main(void){
int n,i;
i = 1;
printf("Number = ");
scanf("%d",&n);
while(i<=10){
    printf("%d X %d = ",n,i);
    printf("%d\n",n*i);
    i++ ;
}
    return 0;
}