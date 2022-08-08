#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int sum = 0;
for (int i = 1;i<=n;i++){
    printf("%d\n",i);
    sum =  sum + i;
};
printf("Sum is %d",sum);
    return 0;
}