// Friend Function
#include<iostream>
using namespace std;
class Distance {
private:
int meter;
friend int AddTen(Distance);
public:
Distance() : meter(0) {
}
};
//friend function definition
int AddTen(Distance d) {
//accessing private members from the
//friend function
d.meter +=10;
return d.meter;
}
int main()
{
Distance D;
cout<<"Distance : " << AddTen(D);
return 0;
}

