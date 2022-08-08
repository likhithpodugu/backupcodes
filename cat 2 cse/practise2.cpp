#include <iostream>
#include <string.h>
using namespace std;

class student{
    public :
    int marks;
    string name;
    static int objectcount;

    student(){
        objectcount++ ;
    };

    static int display(){
        cout<<objectcount<<endl ;
    }
};

int student :: objectcount = 0; 

int main(){
    student s1;
    student s2;

    cout<<student::objectcount<<endl ;
    student::display();
}