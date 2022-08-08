#include <iostream>
using namespace std;

class student{
    public:
    static int objectcount ;
    string name;
    int id;
    string reg_no ;
    student(string regs){
        cout<<"----------------HII-------------"<<endl;
        reg_no = regs ;
        objectcount++ ;
    };
    void scan(){
        cin>>name;
        cin>>id;
    };

    void printf(){
        cout<<"NAME IS "<<name<<endl ;
        cout<<"ID IS "<<id<<endl ;
        cout<<reg_no<<endl ;
    };
};

int student :: objectcount = 0 ;

int main(){
    student s1("21BCE3106") ;
    student s2("21BCE2496") ;
    s1.scan();
    s2.scan();
    s1.printf();
    s2.printf();
    cout<<student::objectcount<<endl ;

};