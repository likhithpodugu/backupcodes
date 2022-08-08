#include <iostream>
#include<string.h>

using namespace std;
int factorial(int n){
if(n==1){
return 1;
}
return n*factorial(n-1);

}
int main()
{
int n;
string str[10];
string home;
cin>>n;
for(int i=0;i<n;i++){
cin>>str[i];
}
cin>>home;
cout<<factorial(n-1);
return 0;
}