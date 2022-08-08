#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int i = 0;
    while(i<=n){
        scanf("%d",arr[i]);
        i++ ;
    };
    int *p[n];
    for(int j =0;j<=n;j++){
        p[j] = &arr[j] ;
    };
    for(int k = 0;k<=n;k++){
        printf("%d\t", *p[k]);
    }
    return 0;
}