#include <bits/stdc++.h>
using namespace std;

int safeMod(int x, int mod){
    int y = x % mod;
    if(y < 0)
        y += mod;
    return y;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    const long long int mod = 1e9+7;

    int n;
    cin>>n;

    long long int ans = 1;

    for(int i = 0; i<n; i++){
        ans *= 2;
        ans %= mod;
    }

    cout<<ans<<endl;

    return 0;
}

