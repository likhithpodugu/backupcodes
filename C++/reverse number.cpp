#include <iostream>
using namespace std;
int main(){
int n;
cin>>n;

int reverse;
while (n>0){
	int digits = n%10;
	reverse = digits + reverse*10;
	n = n/10 ;
}
cout<<reverse<<endl;


return 0;
}
