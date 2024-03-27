#include <bits/stdc++.h>
using namespace std;

const int nmax = 100000+10;

vector<int> adjlist[nmax];
bool visited[nmax];
int dist[nmax];
int par[nmax];

void bfs(int u){
    queue<int> q;
    q.push(u);
    visited[u] = true;
    dist[u] = 0;
    par[u] = -1;

    while(!q.empty()){
        u = q.front();
        q.pop();
        cout<<"bfs at "<<u<<" distance = "<<dist[u]<<endl;

        for(int v : adjlist[u]){
            if(!visited[v]){
                q.push(v);
                visited[v] = true;
                dist[v] = dist[u] + 1;
                par[v] = u;
            }
        }
    }
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

//    for(int i = 1; i<=v; i++){
//        if(!visited[i]){
//            cout<<"Calling bfs "<<i<<endl;
//            bfs(i);
//        }
//    }

    bfs(1);


    int cur = 4;
    vector<int> path;
    path.push_back(cur);

    while(cur != 1){
        cur = par[cur];
        path.push_back(cur);
    }

    for(int i = path.size()-1; i >= 0; i--)
        cout<<path[i]<<" ";


    return 0;
}

