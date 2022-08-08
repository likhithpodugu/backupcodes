#include <stdio.h>
#include <string.h>

struct student
{
    char student_name[50];
    char favorite_subject[20];
    char Reg_Number[9];

}s1;

void display(char *a,char *b,char *c){
    printf("%s\n",a);
    printf("%s\n",b);
    printf("%s\n",c);

}


int main(){

    strcpy(s1.student_name,"John Digoi");
    strcpy(s1.favorite_subject,"Maths");
    strcpy(s1.Reg_Number,"756");

    display(s1.student_name,s1.favorite_subject,s1.Reg_Number);

    return 0;
}