/*a.) Represent a coordinate point in geometry as a Point class that has two private 
variables x and y. It has a parametrized constructor that custom initializes x and y 
during object instantiation inside main. Implement public getter methods to get x and y
when they are needed. Implement public setter methods to set the values for x and y.
Create a global function called Euclidean that takes two Point objects as input and returns 
the Euclidean distance between them. Euclidean distance between two points (x,y) and (x2,2) 
is √(x-x2)^2 + (-)^2. (6 marks)
b.) Create a global function called translate that takes as input a Point object p, an integer
value tx, and another integer value ty. It returns a new Point whose x coordinate is p's x 
incremented by tx, and the y coordinate is p's y incremented by ty. Show the new point's x 
and y coordinates inside main. (4 marks)
*/

#include <iostream>
#include <cmath>
using namespace std ;
class point{
    int x ;
    int y ;
    
    public:
    point(){
        x = 10 ;
        y = 10 ;
    }
    
    int setx(int a ){ 
        x = a ;
        
        return x ;
    }
    
    int sety(int b){
        y = b ;
        
        return y ;
    }
    
    int getx(){
        return x;
    }
    int gety(){
        return y ;
    }
} ;

int eucledian(int x1 , int y1,int x2, int y2){
    int ans = (x1-x2)*(x1-x2) + (y1 - y2)*(y1 - y2) ;
    int a = sqrt(ans) ;
    
    return a ;
}

point transulate(point p,int x2, int y2){
    p.setx(p.getx()+x2) ;
    p.sety(p.gety() + y2) ;
    return p ;
}

int main(){
    point p1 ;
    point p2 ;
    cout<<eucledian(p1.setx(1) ,p1.sety(2) , p2.setx(0) , p2.sety(0)) <<endl ;
    
    point p3 ;
    p3 = transulate(p1,5,5) ;
    
    cout<<p3.getx()<<","<<p3.gety()<<endl ;
}
