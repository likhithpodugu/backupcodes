// C++ Friend class
//A friend class can access
//both private and protected members
//of the class in which it has been
//declared as friend.
// Example:-
#include<iostream>
using namespace std;
class A{
int x=1115;
friend class B; // friend class
};
class B {
public:
void display(A &a)
{
cout<< "Values of x is: "<< a.x;
}
};
int main()
{
A a;
B b;
b.display(a);
return 0;
}