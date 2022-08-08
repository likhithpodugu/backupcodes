#include <iostream>
using  namespace std;

class mobile{
    public:
    static int objectcount;
    string name;
    string color;
};

class samsung: public mobile{
    public:
    string os;
    string processor;

    void get(){
        cin>>name;
        cin>>color;
        cin>>os;
        cin>>processor;
    };
    void put(){
        cout<<"NAME - "<<name<<endl;
        cout<<"COLOR - "<<color<<endl ;
        cout<<"OS - "<<os<<endl ;
        cout<<"PROCESSOR - "<<processor <<endl;
    };

    samsung(){
        objectcount++ ;
    };
};

class apple: public mobile{
    public:
    string dynamic_depth;
    string OS;

    void getdata(){
        cin>>name;
        cin>>color;
        cin>>dynamic_depth;
        cin>>OS ;
    };
    void putdata(){
        cout<<"NAME - "<<name<< endl;
        cout<<"COLOR - "<<color << endl;
        cout<<"OS - "<<OS << endl;
        cout<<"DYNAMIC DEPTH - "<<dynamic_depth << endl;
    };

    apple(){
        objectcount = objectcount + 2 ;
    };
};

int mobile :: objectcount = 0 ;

int main(){
samsung s1;
samsung s2;
apple a1;
s1.get();
s2.get();
a1.getdata();
s1.put();
s2.put();
a1.putdata();

cout<<"NO OF OBJECTS -- "<<mobile::objectcount ;
return 0;
};