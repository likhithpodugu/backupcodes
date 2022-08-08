#include <iostream>
using namespace std;

class B1{
    int x;
    public:
    virtual void F1()=0;
    int getX(){return x;};
};

class D1: public B1{
    int y;
    public:
    void F1(){
        cout<<"F1() is called";
    }
};

int main(){
    D1 d;
    d.F1();
    return 0;
}