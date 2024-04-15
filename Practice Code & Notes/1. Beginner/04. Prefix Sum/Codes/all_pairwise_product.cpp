
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
const int mod = 1e9 + 7;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n;
    cin>>n;


    vector<ll> input(n);
    vector<ll> pref(n);

    for(int i = 0; i<n ;i++){
        cin>>input[i];
    }


    pref[0] = input[0];

    for(int i = 1; i<n; i++){
        pref[i] = pref[i-1] + input[i];
        pref[i] %= mod;
    }


    ll ans = 0;


    for(int i = 1; i<n; i++){
        ans += pref[i-1] * input[i];
        ans %= mod;
    }


    cout<<ans<<endl;





    return 0;
}


