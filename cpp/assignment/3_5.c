#include <stdio.h>
#include <ctype.h>

int main()
{
char grade;
scanf("%c",&grade);
switch(toupper(grade))
{
    case 'S': printf("90<=marks<=100") ;
    break;
    case 'A': printf("80<=marks<=90") ;
    break;
    case 'B': printf("70<=marks<=80") ;
    break;
    case 'C': printf("60<=marks<=70") ;
    break;
    case 'D': printf("50<=marks<=60") ;
    break;
    case 'E': printf("40<=marks<=50") ;
    break;
    default : printf("FAILED") ;
    break;   
}
    return 0;
}