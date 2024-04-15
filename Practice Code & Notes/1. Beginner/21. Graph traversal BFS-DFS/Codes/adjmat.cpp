#include <bits/stdc++.h>
using namespace std;

const int nmax = 2000+10;

int adj[nmax][nmax];

/// adj[i][j] = how many edge between i and j

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int v, e;
    cin>>v>>e;
    for(int i = 0; i<e; i++){
        int u, v;
        cin>>u>>v;

        adj[u][v]++;

        /// if undirected, following line is also required
        adj[v][u]++;
    }

    return 0;
}
