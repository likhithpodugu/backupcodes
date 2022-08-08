/* "Write a c program to take input of two numbers, 
find their sum, product and sum of the squares." */

#include <stdio.h>      

int main()              
{
   int a,b;
   printf("Num1 = ");
   scanf("%d",&a);
   printf("Num2 = ");
   scanf("%d",&b);
   int sum = a+b;
   int product = a*b;
   int sum_of_squares = a*a + b*b ;
   printf("Sum = %d,",sum);
   printf("Product = %d,",product);
   printf("Sum of squares = %d",sum_of_squares);
    return 0;
}