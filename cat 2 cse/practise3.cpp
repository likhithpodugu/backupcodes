#include <iostream>
using namespace std ;

class student{

    public:
    student(){
        cout<<"WELCOME"<<endl;
    };
    ~student(){
        cout<<"EXIT"<<endl ;
    };

};

int main(){
    student s1;
    student s2;
};