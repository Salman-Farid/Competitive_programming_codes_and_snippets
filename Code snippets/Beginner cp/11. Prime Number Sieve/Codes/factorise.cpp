#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

vector<ll> factorise(ll n){
    vector<ll> ret;
    if(n == 1)
        return ret;

    for(ll i = 2; i*i <= n; i++){
        if(n % i == 0){
            while(n % i == 0){
                n /= i;
                ret.push_back(i);
            }
        }
    }

    if(n != 1)
        ret.push_back(n);

    return ret;
}
/// O(sqrt(n))

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<ll> v = factorise(111);

    for(ll x : v){
        cout<<x<<" ";
    }

    return 0;
}

/// 10^14 -> 10^7
