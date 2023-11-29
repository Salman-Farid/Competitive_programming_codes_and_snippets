#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

/*
https://toph.co/p/no-gcd
*/

int primes [] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
const int pcnt = 15;

ll cnt[1<<pcnt];
ll dp[1<<pcnt];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int tc;
    cin>>tc;
    for(int cs = 1; cs <= tc; cs++){
        for(int i = 0; i<(1<<pcnt); i++){
            cnt[i] = dp[i] = 0;
        }
        int n;
        cin>>n;

        for(int i = 0; i<n; i++){
            ll x;
            cin>>x;

            int mask = 0;
            for(int j = 0; j<pcnt; j++){
                if(x % primes[j] == 0)
                    mask |= (1<<j);
            }

            cnt[mask]++;
        }

        for(int m = 0; m<(1<<pcnt); m++){
            for(int s = m; ;s = (s-1) & m){
                dp[m] += cnt[s];
                if(s == 0) break;
            }
        }

        ll ans = 0;
        for(int m = 0; m<(1<<pcnt); m++){
            int mc = ((1<<pcnt)-1) ^ m;

            ans += cnt[m] * dp[mc];

            for(int i = 0; i<pcnt; i++){
                if(m & (1<<i)){
                    ans += cnt[m] * (dp[mc | (1<<i)] - dp[mc]);
                }
            }
        }

        cout<<ans<<"\n";

    }

    return 0;
}


