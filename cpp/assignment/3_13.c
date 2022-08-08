#include <stdio.h>

int main(void){
int a,b,c,d,e;
printf("Num1 = ");
scanf("%d",&a);
printf("Num2 = ");
scanf("%d",&b);
printf("Num3 = ");
scanf("%d",&c);
printf("Num4 = ");
scanf("%d",&d);
printf("Num5 = ");
scanf("%d",&e);

int sum = a + b + c + d + e ;
float average = sum / 5 ;
printf("Sum = %d\n",sum);
printf("Average = %f\n" , average);
    return 0;
}