#include<bits/stdc++.h>
using namespace std;

int main(){

    pair<int, string> p;
    p = make_pair(10, "hello");
    cout<<p.first<<endl;
    cout<<p.second<<endl;


    ///pairs have lexicographical order defined
    /// ignore the boolalpha, that basically just helps print bool values as true and false
    pair<int, int> p1 {10, 20}, p2 {50, 0};
    cout<<boolalpha<< (p1<p2) <<endl;


    p1 = {10, 20};
    p2 = {10, 0};
    cout<<boolalpha<< (p1<p2) <<endl;

    return 0;
}
