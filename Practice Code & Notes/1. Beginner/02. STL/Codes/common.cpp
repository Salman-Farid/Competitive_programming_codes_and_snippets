#include <bits/stdc++.h>
using namespace std;

int main(){
    int x = 1;
    int y = 2;
    swap(x, y);
    cout<<x<<endl;
    cout<<y<<endl;



    cout<<"min"<<endl;
    cout<<min(1, 3)<<endl;
    cout<<"max"<<endl;
    cout<<max(1, 3)<<endl;


    int a = 1, b = 3, c = 2, d = 5;
    int mx = max(a, b);
    mx = max(mx, c);
    mx = max(mx, d);
    ///mx now contains max of a, b, c, d



    cout<<"gcd"<<endl;
    cout<<__gcd(100, 156)<<endl;



    string s = "hello";
    s = s + s;
    cout<<s<<endl;


    cout<<"reference"<<endl;
    int z = 10;
    int &z2 = z;
    z2 = 20;
    cout<<z<<endl;

}
