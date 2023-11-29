#include <bits/stdc++.h>
using namespace std;

///============================ BEGIN TEMPLATE ==========================

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


///============================ END TEMPLATE ==========================

/// the hull is put in hull vector, in CCW order
/// Note corner cases like just one point, or all point in one line.

int convexHull(vector<point> &input, vector<point> &hull){
    int n = input.size();
    if(n == 1){
        hull = input;
        return 1;
    }
    vector<point> up, down;
    up.reserve(n); down.reserve(n);

    sort(input.begin(), input.end());

    /// creating lower hull
    for(int i = 0; i<n; i++){
        point p = input[i];
        while(down.size() > 1 && orient(down[down.size()-2], down[down.size()-1], p) <= 0){
            down.pop_back();
        }
        down.push_back(p);
    }

    /// creating upper hull
    for(int i = n-1; i>=0; i--){
        point p = input[i];
        while(up.size() > 1 && orient(up[up.size()-2], up[up.size()-1], p) <= 0){
            up.pop_back();
        }
        up.push_back(p);
    }

    hull.insert(hull.end(), down.begin(), down.end());
    hull.insert(hull.end(), up.rbegin()+1, up.rend()-1);
    return hull.size();
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<point> input, hull;
    input.emplace_back(0, 0);
    input.emplace_back(5, 0);
    input.emplace_back(3, 3);
    input.emplace_back(5, 5);
    input.emplace_back(0, 5);

    int sz = convexHull(input, hull);

    for(int i = 0; i<sz; i++){
        cout<<hull[i]<<"\n";
    }


    return 0;
}

/// x > y => x-y > 0
/// sgn(x-y) == 1
/// sgn(y-x) == -1

