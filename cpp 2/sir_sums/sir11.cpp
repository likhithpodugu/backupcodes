//Objects as Function Arguments in C++
//passing object by value to a member function ofthe
//same class.
#include<iostream>
using namespace std;
class Weight {
int Kilogram;
int Grams;
public:
void getdata();
void putdata();
void Sum_Weight(Weight, Weight);
};



void Weight:: getdata() {
cout<<"\nKilograms: ";
cin>>Kilogram;
cout<<"\n Grams :";
cin>>Grams;
}
void Weight:: putdata() {
cout<<Kilogram<<"Kgs and "<<Grams<<" grams\n";
}
void Weight:: Sum_Weight(Weight w1, Weight w2) {
Grams = w1.Grams + w2.Grams;
Kilogram=Grams/1000;
Grams=Grams%1000;
Kilogram+=w1.Kilogram + w2.Kilogram;
}
int main() {
Weight w1, w2, w3;
cout<<"Enter Weight in Kilograms and Grams \n";
cout<<"\n Enter Weight w1: ";
w1.getdata();
cout<<"\n Enter Weight w2: ";
w2.getdata();
w3.Sum_Weight(w1,w2);
cout<<"\n Weight w1 = ";
w1.putdata();
cout<<" Weight w2 =";
w2.putdata();
cout<<"Total Weight = ";
w3.putdata();
return 0;
}