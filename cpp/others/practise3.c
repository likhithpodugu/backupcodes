#include <stdio.h>
#include <string.h>

int main(){
    int n;
    scanf("%d",&n);
    struct t{
        char name[10];
        char car_number[10];
        int starting_time_hour;
        int starting_time_minutes;
        int staring_time_seconds;
        int ending_time_hour;
        int ending_time_minutes;
        int ending_time_seconds;
    } t[n];
    

    for(int i=0;i<n;i++){
        scanf("%s %s %d %d %d %d %d %d",&t[i].name,&t[i].car_number,&t[i].starting_time_hour,&t[i].starting_time_minutes);

    };
    for(int j=0;j<n;j++)
    {
        printf("%s %s %d %d %d %d %d %d",t[j].name,t[j].car_number,t[j].starting_time_hour,t[j].starting_time_minutes);
    };
    
    return 0;
}
