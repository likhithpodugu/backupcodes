/* "Write c program to take age and height in feet 
(a float value should be entered),print all values in new lines." */
#include <stdio.h>      

int main()              
{
   int age;
   float height;
   printf("Age : ");
   scanf("%d", &age);
   printf("Height : ");
   scanf("%f", &height);
   printf("Age = %d\n", age);
   printf("Height = %f\n", height*30.48);
    return 0;
}