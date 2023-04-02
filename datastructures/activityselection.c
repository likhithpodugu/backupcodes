#include <stdio.h>

void activityselection(int n , int *s , int *f){
    int i = 0 ;
    printf("0\t") ;
    
    for(int j = 1 ;j<n ;j++){
        if(s[j]>=f[i]){
            printf("%d\t",j) ;
            i = j ;
        }
    }
}

int main(){
    int n ;
    scanf("%d",&n) ;
    int s[n] ;
    int f[n] ;
    for(int i = 0;i<n;i++){
        scanf("%d",&s[i]) ;
    }
    for(int j = 0 ;j<n ; j++){
        scanf("%d",&f[j]) ;
    }
    
    activityselection(n,s,f) ;
}
