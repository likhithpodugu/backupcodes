#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define n 10

int stack[n];
int top = -1 ;

void push(char num1){
    top++ ;
    stack[top] = num1 ;
}

void pop(){
    top-- ;
}

void peek(){
    printf("%d",stack[top]);
}

void display(){
    for(int i = top;i>=0;i--){
        printf("[%c]",stack[i]);
    }
}

int main(){
    char exp[20];
    printf("Enter infix expression:\n");
    scanf("%s",&exp);
    int i = 0;
    int j,k = 0;
    char ans[20];

    while(exp[i]!= '\0'){
    if(isalpha(exp[i])){
        ans[j] = exp[i] ;
        i++ ;
        j++ ;
    }
    else{
        if(stack[0] = '\0'){
            push(exp[i]) ;
        }
        else if(stack[top-1]=='+'){
            if(exp[i]=='+'){
                ans[j] = '+' ;
                push(exp[i]);
                j++ ;
            }
            else if(exp[i] == '-'){
                ans[j] = '+';
                j++ ;
            }
        }


        i++ ;
    };
    };
    
}