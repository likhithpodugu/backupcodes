#include <iostream>
using namespace std;
class CAR {
public:
string Brand;
string Model;
int Year_Manu;
CAR(string x, string y, int z)//constructor with parameter
{
Brand = x;
Model = y;
Year_Manu=z; }
};

int main() {
CAR C_Obj1 ("BMW", "X8", 2016);
CAR C_Obj2 ("Honda", "Accord", 2007);
cout<<C_Obj1.Brand << " " <<C_Obj1.Model<< " " <<C_Obj1.Year_Manu <<endl;
return 0;
}

