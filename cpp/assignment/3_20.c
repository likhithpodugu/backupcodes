#include <stdio.h>
int main() {
   int n,i;
   printf("Number : ");
   scanf("%d", &n);
   i = 1;
   while(i<=n){
       printf("Square of %d : %d\n",i,i*i);
       i++;
   }
   return 0;
}
