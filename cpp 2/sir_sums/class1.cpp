#include <iostream>
using namespace std;
//create a class named Employee with the Data Members
// as Emp_ID,Name, Salary. And the functions named Insert
// and another function named display are used to display
// the Emp_ID, Name and Salary for 3 Employee.
class employee{
int Emp_ID;
string Name;
void insert(int a,string b){
Emp_ID = a;
Name = b;
};
void display(){
    cout<<Emp_ID<<" "<<Name<<endl;
};
};
int main(){
employee E1;
employee E2;
employee E3;
E1.insert(213444,"lith");
E1.display();
    return 0;
}