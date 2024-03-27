#include <bits/stdc++.h>
using namespace std;

const int nmax = 100000+10;

vector<int> adjlist[nmax];
bool visited[nmax];

void dfs(int u){
    cout<<"dfs at "<<u<<endl;
    visited[u] = true;

    for(int v : adjlist[u]){
        cout<<"looking at "<<v<<" from "<<u<<endl;
        if(!visited[v])
            dfs(v);
    }

    cout<<"dfs ended at "<<u<<endl;
}

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
        adjlist[v].push_back(u);
    }

    for(int i = 1; i<=v; i++){
        if(!visited[i]){
            cout<<"Calling dfs "<<i<<endl;
            dfs(i);
        }
    }

    return 0;
}

