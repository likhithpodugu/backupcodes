//Destructor!!!
//A destructor is defined like constructor. It must have same name as class.
//But it is prefixed with a tilde sign (~).
#include <iostream>
using namespace std;
class Employee
{
public:
Employee()
{
cout<<"Constructor Invoked"<<endl;
}
~Employee() // Destructor
{
cout<<"Destructor Invoked"<<endl;
}
};
int main(void)
{
Employee e1; //creating an object of Employee
Employee e2; //creating an object of Employee
return 0;
}

