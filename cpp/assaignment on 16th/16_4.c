#include <stdio.h>

int main()
{
    int a = 10,b = 5;
    int *c;
    c = &a;
    int *d ;
    d = &b;
    int sum ;
    sum =  *c + *d ;
    printf("%d",sum);

    return 0;
}