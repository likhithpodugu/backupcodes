#include <stdio.h>
#include <math.h>

int main(void){
int n,i;
i = 1;
printf("Number = ");
scanf("%d",&n);
while(i<=n){
    printf("%d cube = ",i);
    printf("%d\n",i*i*i);
    i++ ;
}
    return 0;
}