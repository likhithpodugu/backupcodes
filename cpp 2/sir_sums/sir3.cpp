#include <iostream>
using namespace std;
// C++ Constructors
// is a Special Method that is automatically called
// when an object of a class is created.
class MClass { // The Class
public: // access specifiers
MClass() { // constructor
cout<< "Welcome to Class Constructor";
}
};
int main() {
MClass MC_Obj; // creates an object of MClass
// ( this will call the constrcutor also)
return 0;
}