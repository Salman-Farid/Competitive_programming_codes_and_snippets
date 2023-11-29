#include <bits/stdc++.h>
using namespace std;

typedef long long int T;    /// basic type
typedef double Tf;      /// floating point type

Tf eps = 1e-6;

int sgn(Tf x){
    if(fabs(x) < eps) return 0;
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
    point p, q;
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin>>n;

    vector<point> poly(n);

    for(int i = 0; i<n; i++){
        cin>>poly[i].x>>poly[i].y;
    }


    T ans = 0;

    for(int i = 0; i<n; i++){       /// poly[i], poly[i+1], origin
        int j = (i+1) % n;
        ans += cross(poly[i], poly[j]);
    }

    ans = abs(ans);

    cout<<ans<<endl;

    return 0;
}

/// x > y => x-y > 0
/// sgn(x-y) == 1
/// sgn(y-x) == -1

