#include <stdio.h>
#include <string.h>

int main(void){

char strings[30] = "LIKHITH";
char newstr[30];
strcpy(newstr,strings);
printf("Original string ---> %s\n",strings);
printf("Copied string ---> %s\n", newstr);

return 0;}