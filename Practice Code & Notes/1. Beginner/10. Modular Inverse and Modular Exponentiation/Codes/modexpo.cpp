#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

/// returns a^n % m
ll modexpo(ll a, ll n, ll m){
    if(n == 0){
        return 1;
    }

    ll y = modexpo(a, n/2, m);

    y = y * y % m;

    if(n % 2 == 1){
        y = y * a % m;
    }

    return y;
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int x = 29;

    int m = 31;


    ///11^-1


    /// 11^(p-2) = 11^29
    /// inverse creating O(p)


    ll y = modexpo(x, m-2, m);


    cout<<y<<endl;
    cout<<(x*y) % m<<endl;



    return 0;
}
