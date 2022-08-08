#include <stdio.h>
#include <string.h>

struct student{
    char name[30];
    char regno[10];
    int age;
};

int main(){
    struct student s1 = {"Sathwika","21BCE2496",18};
    struct student *s2 ;
    s2 = &s1;
    printf("%d\n",s2->age);
    printf("%s %s",s2->name,s2->regno);
    return 0;
}