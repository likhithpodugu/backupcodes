#include <stdio.h>

int main()
{
    int num ;
    scanf("%d",&num);
    int *a;
    a = &num ;
    printf("Number is %d\n",num);
    printf("Number is %d\n",*a);
    printf("Address is %p\n",&num);
    printf("Address is %p\n",a);
    printf("Address of pointer is %p\n",&a);
    return 0;
}