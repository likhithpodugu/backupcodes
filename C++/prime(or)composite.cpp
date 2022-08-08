#include <iostream>;
using namespace std;

int main(){
	int a;
	cin>>a;
	int i=2;
	while (a>0){
		if (a%i==0){
		cout<<"It is an composite number";
		break;
		}else{
			cout<<"it is an prime number";
			break;
		}i += 1;
	}
	return 0;
}
