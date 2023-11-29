#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll lcm(vector<ll> v){
    ll x = v[0];
    for(int i = 1; i<v.size(); i++){
        x =  x * v[i] / __gcd(x, v[i]);
    }
    return x;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int n;

    int k;

    cin>>n>>k;

    vector<ll> input(k);

    for(int i = 0; i<k; i++){
        cin>>input[i];
    }

    /// 0 -> 2^k

    ll ans = 0;
    for(int mask = 1; mask < (1<<k); mask++){
        int sz = 0;
        vector<ll> elements;

        for(int i = 0; i<k; i++){
            if((mask & (1<<i)) > 0){
                elements.push_back(input[i]);
            }
        }

        ll x = lcm(elements);

        if(elements.size() % 2 == 1){
            ans += n/x;
        }
        else{
            ans -= n/x;
        }
    }

    cout<<ans<<endl;
}
