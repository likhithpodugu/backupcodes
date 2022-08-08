#include <stdio.h>      

int main()              
{
   int age;
   scanf("%d", &age);
   if(age>=18 && age<=30){
       goto g;
   }
   else{
       goto n;
   }

   g: 
   {
   printf("VALID AGE");
   return 0;
   }
   n:
   printf("INVALID AGE");
}