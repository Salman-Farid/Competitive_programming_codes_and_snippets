
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n;
    ll x;
    cin>>n>>x;


    vector<ll> input(n);
    vector<ll> pref(n);

    for(int i = 0; i<n ;i++){
        cin>>input[i];
    }


    pref[0] = input[0];

    for(int i = 1; i<n; i++)
        pref[i] = pref[i-1] + input[i];




    /// count pref[r] - pref[l-1] = x

    ll ans = 0;
    map<ll, int> mp;
    mp[0] = 1;


    for(int r = 0; r<n; r++){
        ll target = pref[r] - x;

        if(mp.count(target) > 0){
            ans += mp[target];
        }

        mp[pref[r]]++;
    }

    cout<<ans<<endl;





    return 0;
}

