#include <stdio.h>

int main(){
int a;
scanf("%d",&a);
if (a<0){
    printf("negative number");
}
else if (a>0){
    printf("positive number");
}
else {
    printf("its an nor negative nor postive number");
}
    return 0;
}