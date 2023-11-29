#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;


vector<pair<ll, int>> factorize(ll n){
    vector<pair<ll, int>> ret;
    for(ll p = 2; p*p <= n; p++){
        if(n % p == 0){
            int power = 0;
            while(n % p == 0){
                n /= p;
                power++;
            }
            ret.push_back(make_pair(p, power));
        }
    }

    if(n > 1){
        ret.push_back(make_pair(n, 1));
    }

    return ret;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int tc;
    cin>>tc;
    for(int cs = 1; cs <= tc; cs++){
        ll n;
        cin>>n;
        vector<pair<ll, int>> v = factorize(n);

        int maxIndex = 0;
        for(int i = 0; i<v.size(); i++){
            if(v[i].second > v[maxIndex].second)
                maxIndex = i;
        }

        int maxPower = v[maxIndex].second;

        cout<<maxPower<<"\n";

        for(int i = 0; i<maxPower-1; i++){
            cout<<v[maxIndex].first<<" ";
            n /= v[maxIndex].first;
        }

        cout<<n<<"\n";

    }

    return 0;
}



