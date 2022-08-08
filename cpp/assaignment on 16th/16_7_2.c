#include <stdio.h>

int main(){
    int n = 3;
    //scanf("%d",&n);
    int arr[3] = {1,2,3};
    int *p[n];
    for(int j =0;j<=n;j++){
        p[j] = &arr[j] ;
    };
    for(int k = 0;k<=n;k++){
        printf("%d\t", *p[k]);
    }
    return 0;
}