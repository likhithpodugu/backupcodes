#include <stdio.h>
#include <string.h>

int main(){
   char sen[100];
   fgets(sen,100,stdin);
   int i =0;
   while(i<100){
       if(sen[i]==' '){
        printf("\n");
       }
       else{
           printf("%c",sen[i]);
       };
       i++;
   };
    return 0;
}