#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, q; cin>>n>>q;
    vector<ll> input(n);
    vector<ll> pref(n);
    for(int i = 0; i<n; i++) cin>>input[i];
    pref[0] = input[0];
    for(int i = 1; i<n; i++) pref[i] = input[i] ^ pref[i-1];
    for(int i = 0; i<q; i++){
        int l, r; cin>>l>>r;
        l--, r--;
        ll ans = pref[r];
        if(l != 0) ans ^= pref[l-1];
        cout<<ans<<"\n";
    }
}

