#include <iostream>
using namespace std;

class tour{
    public:
    int adultfare ;
    int kidfare ;
    string tripcode;
    int no_of_adults ;
    int no_of_kids ;
    int kilometers;
    int totalfare ;

    void get(){
        cin>>tripcode;
        cin>>no_of_adults;
        cin>>no_of_kids ;
        cin>>kilometers ;
    };
    void put(){
        cout<<tripcode<<endl;
        cout<<no_of_adults<<endl;
        cout<<no_of_kids<<endl;
        cout<<kilometers<<endl;
    };
        int assignfare(){
        if(kilometers <500){
            adultfare = 200*no_of_adults ;
            kidfare = 100*no_of_kids ;
        }
        else if(kilometers <= 1000 ){
            adultfare = 300*no_of_adults ;
            kidfare = 150*no_of_kids ;
        }
        else{
            adultfare = 500*no_of_adults ;
            kidfare = 250*no_of_kids;
        };

        return totalfare = kidfare + adultfare ;
    };
};

int main(){
int n;
cin>>n ;
tour t[n];
for( int i=0; i<n; i++ )
	{
		t[i].get();
	};
for( int K=0; K<n; K++ )
	{
		t[K].put();
	};
int assignfares ;
for(int j=0; j<n ; j++){
    assignfares =  t[j].assignfare() ;
};
cout<<assignfares<<endl ;
};