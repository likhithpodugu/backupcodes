#include <stdio.h>
#include <string.h>

int main(){
    char words[10];
    fgets(words,10,stdin);
    char *word;
    word = words;
    int n = strlen(word);
    int vowels = 0;
    int consonents = 0;

   for(int i=0;i<n-1;i++)
    {
        if((*word+i)=='A' ||(*word+i)=='E' ||(*word+i)=='I' ||(*word+i)=='O' ||(*word+i)=='U'||(*word+i)=='a' ||(*word+i)=='e' ||(*word+i)=='i' ||(*word+i)=='o' ||(*word+i)=='u'){
        vowels++;
        }
        else{
        consonents++;
        };
    }

    printf("vowels %d\n",vowels);
    printf("consonants %d",consonents);

    return 0;
}