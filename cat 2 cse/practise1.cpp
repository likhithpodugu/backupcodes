#include <iostream>
using namespace std;

class phone{

    public:
      int price;
      string model;
      int xx ;
      int yy ;
      phone(int x,int y){
          cout<<"------WELCOME---------"<<endl ;
          xx = x ;
          yy = y;
      };

      void displayspecs(){
            cout<<"SPECS---"<<xx<<endl ;
            cout<<"Specs---"<<yy<<endl ;
      };

      void insert(int price , string model){
            this -> price = price;
            this -> model = model;
      };
      void display(){
          cout<<"cost---"<<price<<endl;
          cout<<"model---"<<model<<endl;
      };
      void batterycapacity();

};

void phone::batterycapacity(){
    cout<<100<<endl ;
}

int main(){

    phone vivo(2,45);
    vivo.price = 25000 ;
    vivo.model = "V17" ;
    cout<<"COST---\n"<<vivo.price<<endl ;
    cout<<"MODEL----\n"<<vivo.model<<endl;
    phone redmi(32,66);
    redmi.insert(13000,"poco");
    redmi.displayspecs();
    redmi.display();
}