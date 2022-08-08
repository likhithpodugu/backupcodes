#include <iostream>
using namespace std;

class student{
    public:
    int a;
    static int objectcount ;

    student(int a){
        this -> a = a ;
        objectcount++ ;
    }

    static int getobjects(){
        return objectcount ;
    }
};

int student::objectcount = 0 ;

int main(){
    student s1(1);
    student s2(2) ;
    cout<<student::objectcount<<endl ;
    cout<<student::getobjects<<endl;
}