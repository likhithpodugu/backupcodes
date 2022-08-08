#include <stdio.h>

int main(){
int age;
printf("Age : ");
scanf("%d",&age);
if (age>=18){
    printf("HE/SHE IS ELIGIBLE FOR CASTING HIS/HER OWN VOTE");
}
else{
    printf("HE/SHE IS NOT ELIGIBLE FOR CASTING HIS/HER OWN VOTE");
}
    return 0;
}