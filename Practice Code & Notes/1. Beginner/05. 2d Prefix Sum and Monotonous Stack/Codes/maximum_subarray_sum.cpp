#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin>>n;
    vector<ll> input(n);

    for(int i = 0; i<n; i++){
        cin>>input[i];
    }

    vector<ll> pref(n);

    for(int i = 0; i<n; i++){
        pref[i] = input[i];
        if(i != 0)
            pref[i] += pref[i-1];
    }

    ll ans = -1e18;   /// 0 if empty subarray is allowed
    ll minsofar = 0;

    for(int r = 0; r<n; r++){
        ll cand = pref[r] - minsofar;
        ans = max(cand, ans);

        minsofar = min(minsofar, pref[r]);
    }

    cout<<ans<<"\n";

    return 0;
}

