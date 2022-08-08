#include <stdio.h>
#include <string.h>

int main(){
char a[25];
char b[25];
scanf("%s %s",&a,&b);
int check = 0;

int len = strlen(a);
for (int i = 0;i<=len;i++){
  if (a[i]==b[i]){
      check = check + 1 ;
  };
};

if(check -1 == len){
    printf("MATCHED");
}
else{
    printf("NOT MATCHED");
}
return 0;
};