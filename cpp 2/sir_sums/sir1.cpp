#include <iostream>
using namespace std;
class student {
public: // makes the data / function public
// they are accebile from outside the class
int Reg_No; // data Member
string Name; //data membr
void insert(int i, string n)
{
Reg_No=i;
Name=n;
}
void display()
{
cout<<Reg_No<<" "<<Name<<endl;
}
};
int main()
{
student s1; // creating an object of Sudent
student s2;
s1.insert(2345,"Manoj");
s2.insert(56788,"Kannan");
s1.display();
s2.display();
return 0;
}