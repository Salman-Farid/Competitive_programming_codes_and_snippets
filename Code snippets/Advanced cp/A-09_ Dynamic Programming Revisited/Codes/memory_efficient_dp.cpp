#include <bits/stdc++.h>
using namespace std;

/*
Given a n length string of ( and ) each position has a score, choose a subsequence of
indices such that total score is maximized.

ex:
()((()
10 30 20 100 80 -60

ans : 80
*/

const int nmax = 10000+10;

int dp[2][nmax];

int main(){

    string s;
    cin>>s;

    int n = s.size();
    vector<int> scores(n);
    for(int i = 0; i<n; i++)
        cin>>scores[i];

    dp[0][0] = 0;
    for(int i = 1; i<nmax; i++) dp[0][i] = -1e9;

    for(int i = 1; i<=n; i++){
        int cur = i % 2;

        for(int b = 0; b<=n; b++){
            dp[cur][b] = dp[cur^1][b];

            int b_tmp = b - (s[i-1] == '(' ? 1 : -1);
            if(b_tmp >= 0 && b_tmp <= n){
                dp[cur][b] = max(dp[cur][b], scores[i-1] + dp[cur^1][b_tmp]);
            }
        }

        for(int b = 0; b <= n; b++){
            dp[cur^1][b] = 0;
        }
    }

    int cur = n % 2;

    cout<<dp[cur][0]<<endl;

    return 0;
}
