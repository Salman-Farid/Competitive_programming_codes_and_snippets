#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int tc;
    cin>>tc;
    for(int cs = 1; cs <= tc;cs++){
        int n;
        cin>>n;
        vector<int> input(n);

        vector<int> compressed;

        for(int i = 0; i<n; i++){
            cin>>input[i];
        }

        for(int i = 0; i<n; i++){
            if(i > 0 && input[i] == input[i-1])
                continue;

            compressed.push_back(input[i]);
        }

        vector<int> cnt(n+1);


        for(int x : compressed){
            cnt[x]++;
        }

        int ans = 1e9;


        for(int i = 1; i<=n; i++){
            if(cnt[i] == 0)
                continue;

            int moves = cnt[i]+1;

            if(i == compressed.front())
                moves--;

            if(i == compressed.back())
                moves--;

            ans = min(ans, moves);
        }


        cout<<ans<<"\n";

    }

    return 0;
}


