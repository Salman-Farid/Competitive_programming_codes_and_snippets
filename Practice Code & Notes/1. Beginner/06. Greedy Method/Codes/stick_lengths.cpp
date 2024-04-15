#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);


    int n;
    cin>>n;

    vector<ll> input(n);

    for(int i = 0; i<n; i++){
        cin>>input[i];
    }


    sort(input.begin(), input.end());

    ll ans = 0;         /// input[n/2]


    for(int i = 0; i<n; i++){
        ans += abs(input[i] - input[n/2]);
    }

    cout<<ans<<"\n";

    return 0;
}
