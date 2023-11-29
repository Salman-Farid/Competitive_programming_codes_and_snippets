#include <bits/stdc++.h>
using namespace std;

typedef long long int T;    /// basic type
typedef double Tf;      /// floating point type

Tf eps = 1e-6;

//int sgn(Tf x){
//    if(fabs(x) < eps) return 0;
//    if(x > 0) return 1;
//    else return -1;
//}

int sgn(T x){
    if(x == 0) return 0;
    if(x > 0) return 1;
    else return -1;
}


struct point{
    T x, y;
    point(T x = 0, T y = 0){
        this->x = x;
        this->y = y;
    }

    point operator+(point p){ return point(x+p.x, y+p.y); }

    point operator-(point p){ return point(x-p.x, y-p.y); }

    point operator*(T a){ return point(x*a, y*a); }

    point operator/(T a){ return point(x/a, y/a); }

    Tf len(){ return sqrt(x*x+y*y); }

    T norm(){ return x*x + y*y; }

    bool operator==(point p){       /// for integers
        return x == p.x && y == p.y;
    }

///    bool operator==(point p){       /// for floating point
///        return sgn(x-p.x) == 0 && sgn(y-p.y) == 0;
///    }

    bool operator<(point p){        /// for integers
        if(x == p.x) return y < p.y;
        else return x < p.x;
    }
//
///    bool operator<(point p){        /// for floating points
///        if(sgn(x-p.x) == 0) return sgn(y-p.y) == -1;
///        else return sgn(x-p.x) == -1;
//    }

};

T dot(point p, point q){
    return p.x * q.x + p.y * q.y;
}

T cross(point p, point q){
    return p.x * q.y - p.y * q.x;
}

/// a->b->c which direction we rotate, +ve ccw, -ve cw, 0 collinear
T orient(point a, point b, point c){
    return cross(b-a, c-a);
}

ostream& operator<<(ostream &os, point p){
    return os<<"("<<p.x<<","<<p.y<<")";
}

T triangleArea(point a, point b, point c){
    return abs(orient(a, b, c))/2;
}


struct segment{
    point a, b;

    bool onSegment(point p){
        if(sgn(orient(a, b, p)) != 0) return false;
        return sgn(dot(p-a, p-b)) <= 0;
    }

    bool intersection(segment s){
        if(onSegment(s.a)) return true;
        if(onSegment(s.b)) return true;
        if(s.onSegment(a)) return true;
        if(s.onSegment(b)) return true;

        int s1 = sgn(orient(a, b, s.a));
        int s2 = sgn(orient(a, b, s.b));
        int s3 = sgn(orient(s.a, s.b, a));
        int s4 = sgn(orient(s.a, s.b, b));

        if(s1*s2 < 0 && s3 * s4 < 0) return true;

        return false;
    }
};



int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int tc;
    cin>>tc;
    for(int cs = 1; cs <= tc; cs++){
        segment s1, s2;
        cin>>s1.a.x>>s1.a.y;
        cin>>s1.b.x>>s1.b.y;
        cin>>s2.a.x>>s2.a.y;
        cin>>s2.b.x>>s2.b.y;

        if(s1.intersection(s2))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }

    return 0;
}

/// x > y => x-y > 0
/// sgn(x-y) == 1
/// sgn(y-x) == -1


