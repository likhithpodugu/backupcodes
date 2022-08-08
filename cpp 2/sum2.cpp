#include <iostream>
using namespace std ;

class group{
    public:
    static int objectcount;
    int patients = 0;
    int weight = 0;
    group(){
        patients = patients + 5;
        weight = weight + 10 ;
        objectcount++ ;
    };
    void avg_weight(){
        cout<<patients/weight<<endl;
    };
};

int group::objectcount = 0;
int main(){
    group g1;
    group g2;
    group g3;
    int a = group::objectcount ;
     cout<<"TOTAL PATIENTS --------- "<<a*5<<endl ;
     g1.avg_weight();
};