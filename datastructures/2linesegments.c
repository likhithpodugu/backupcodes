#include <stdio.h>

struct point{
    int x ;
    int y ;
} ;

int slope(struct point p,struct point q){
    int m ;
    if(q.x == p.x){
        m = 99999 ;
    }
    else{
        m = (q.y - p.y) / (q.x - p.x) ;
    }
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

int doIntersect(struct point p,struct point q,struct point r ,struct point s){
    int o1 = orientation(p,q,r) ;
    int o2 = orientation(p,q,s) ;
    int o3 = orientation(r,s,p) ;
    int o4 = orientation(r,s,q) ;
    
    if(o1!=o2 && o3!=o4){
        return 11 ;
    }
    else if(o1==0 && OnSegment(p,r,q)){
        return 11 ;
    }
    else if(o2==0 && OnSegment(p,s,q)){
        return 11 ;
    }
    else if(o3==0 && OnSegment(r,p,s)){
        return 11 ;
    }
    else if(o4==0 && OnSegment(r,q,s)){
        return 11 ;
    }
    else{
        return -11 ;
    }
}
int main(){
    struct point p1 = {10, 0}, q1 = {0, 10};
    struct point p2 = {0, 0}, q2 = {10, 10};
    printf("%d",doIntersect(p1,q1,p2,q2)) ;
    
}
