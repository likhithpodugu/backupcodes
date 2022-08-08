#include <iostream>
using namespace std;
class Car {
public:
int speed(int maxSpeed); // declaratioin of fucnbtion methods or functions
};
int Car::speed(int maxSpeed) { // ::scope resolution operator
return maxSpeed;
}
int main()
{
Car Car_Obj;
cout << Car_Obj.speed(200); // call the method speed
// with an argument
return 0;
}

