#include<stdio.h>
void main()
{
    int n;
    int a[100],p,c=0;
    scanf("%d%d",&n,&p);
    while(n>0)
    {
        a[c++]=n%10;
        n=n/10;    }
    if(a[c-p]%2==1)
    printf("Odd");
    else printf("Even");
}