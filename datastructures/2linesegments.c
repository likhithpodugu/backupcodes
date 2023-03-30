#include <stdio.h>

struct point{
    int x ;
    int y ;
} ;

int slope(struct point p,struct point q){
    int m ;
    m = (q.y - p.y) / (q.x - p.x) ;
    return m ;
}
int OnSegment(struct point p,struct point q,struct point r){
    if(slope(p,q) == slope(q,r) && slope(p,r) == slope(q,r) && slope(p,q) == slope(p,r)){
        return 1 ;
    }
    else{
        return 0 ;
    }
}
int orientation(struct point p,struct point q,struct point r){
    if(slope(p,q) > slope(q,r)){
        return 3 ;
    }
    else if(slope(p,q) < slope(q,r)){
        return -3 ;
    }
}
int main(){
    struct point p1 = {0, 1};
    struct point p2 = {2, 2};
    struct point p3 = {3 , 3} ;
    printf("%d\n",OnSegment(p1,p2,p3)) ;
    printf("%d",orientation(p1,p2,p3)) ;
}
