#include <bits/stdc++.h>
using namespace std;

const int nmax = 100000+10;

vector<int> adjlist[100000];

/// adjlist[2] = adjacent list of 2

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int v, e;
    cin>>v>>e;
    for(int i = 0; i<e; i++){
        int u, v;
        cin>>u>>v;

        /// store
        adjlist[u].push_back(v);

        /// if undirected, following line is required
        adjlist[v].push_back(u);
    }

    return 0;
}
