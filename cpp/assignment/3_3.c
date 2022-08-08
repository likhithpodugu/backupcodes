/* "" */

#include <stdio.h>      

int main()              
{
    int n,num,sum,large,diff;
    sum = 0;
    large = 0;
    scanf("%d",&n);
  for (int i=0;i<n;i++){
    scanf("%d",&num);
    sum = num + sum;
    if (large<num){
      large = num;
    }
    }
  printf("Sum = %d\n",sum);
  printf("Large number = %d",large);
    return 0;
}