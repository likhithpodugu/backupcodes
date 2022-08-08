#include <stdio.h>
#include <string.h>
struct student{
    char name[15];
    char blood_group[5];
    int age;
}s[3];

int main(){
    for (int i=0;i<3;i++){
        scanf("%s %s %d",&s[i].name,&s[i].blood_group,&s[i].age);

    };

    for (int j=0;j<3;j++){
        printf("%s %s %d",s[j].name,s[j].blood_group,s[j].age);
    };
    
    return 0;
}

