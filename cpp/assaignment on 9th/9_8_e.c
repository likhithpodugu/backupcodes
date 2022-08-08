#include <stdio.h>
#include <string.h>

int main(){
char vowels[10] = "aeiouAEIOU";
char str[25];
scanf("%s",str);
int matched = 0;
int len = strlen(str);
int lens = strlen(vowels);
for(int i =0;i<=len;i++){
    for(int j =0;j<=lens;j++){
        if (str[i]==vowels[j]){
            matched = matched + 1 ;
        };
    };
};
printf("%d",matched);
return 0;
};