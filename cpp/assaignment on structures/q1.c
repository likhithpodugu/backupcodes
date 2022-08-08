#include <stdio.h>
#include <string.h>

int main(){
    int n = 2;

struct student{
    char name[25];
    char regno[25];
    int age;
};

struct student s[n];

    int i;
    for(i=0;i<=n;i++){
        scanf("%c%c%d",&s[i].name,&s[i].regno,&s[i].age);
        printf("%c%c%d",s[i].name,s[i].regno,s[i].age);
    };
};