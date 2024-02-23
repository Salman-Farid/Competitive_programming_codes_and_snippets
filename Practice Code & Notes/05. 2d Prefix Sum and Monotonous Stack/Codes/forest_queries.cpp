#include <bits/stdc++.h>
using namespace std;

char grid[1005][1005];
int pref[1005][1005];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin>>n;
    int q;
    cin>>q;

    for(int i = 0; i<n; i++){
        cin>>grid[i];
    }

    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            pref[i][j] = (grid[i][j] == '*')? 1 : 0;

            if(i != 0)
                pref[i][j] += pref[i-1][j];

            if(j != 0)
                pref[i][j] += pref[i][j-1];

            if(i!= 0 && j != 0)
                pref[i][j] -= pref[i-1][j-1];
        }
    }


    for(int i = 0; i<q; i++){
        int x1, x2, y1, y2;
        cin>>y1>>x1>>y2>>x2;

        x1--, y1--, x2--, y2--;


        int ans = pref[y2][x2];

        if(y1 != 0)
            ans -= pref[y1-1][x2];

        if(x1 != 0)
            ans -= pref[y2][x1-1];


        if(x1 != 0 && y1 != 0)
            ans += pref[y1-1][x1-1];


        cout<<ans<<"\n";


    }

    return 0;
}

