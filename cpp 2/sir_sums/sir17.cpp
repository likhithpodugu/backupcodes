#include <iostream>
using namespace std;

class account{
    public:
    int a = 1000;
};
class programmer: public account{
    public:
    int b = 2000;
};

int main(){
    programmer p1;
    cout<<p1.a<<endl;
    cout<<p1.b<<endl;
}
