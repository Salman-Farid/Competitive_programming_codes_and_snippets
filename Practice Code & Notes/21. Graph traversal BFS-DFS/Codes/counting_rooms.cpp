#include <bits/stdc++.h>
using namespace std;

//const int nmax = 100000+10;
//
//vector<int> adjlist[nmax];
//bool visited[nmax];
//
//void dfs(int u){
//    cout<<"dfs at "<<u<<endl;
//    visited[u] = true;
//
//    for(int v : adjlist[u]){
//        cout<<"looking at "<<v<<" from "<<u<<endl;
//        if(!visited[v])
//            dfs(v);
//    }
//
//    cout<<"dfs ended at "<<u<<endl;
//}

const int nmax = 1010;
char grid[nmax][nmax];
bool visited[nmax][nmax];

int n, m;

void dfs(int i, int j){
    visited[i][j] = true;

    if(i > 0 && grid[i-1][j] == '.' && !visited[i-1][j])
        dfs(i-1, j);

    if(i < n-1 && grid[i+1][j] == '.' && !visited[i+1][j])
        dfs(i+1, j);

    if(j < m-1 && grid[i][j+1] == '.' && !visited[i][j+1])
        dfs(i, j+1);

    if(j > 0 && grid[i][j-1] == '.' && !visited[i][j-1])
        dfs(i, j-1);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    cin>>n>>m;

    for(int i = 0; i<n; i++){
        cin>>grid[i];
    }

    int cnt = 0;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            if(grid[i][j] == '.' && !visited[i][j]){
                dfs(i, j);
                cout<<"dfs at "<<i<<" "<<j<<endl;
                cnt++;
            }
        }
    }

    cout<<cnt<<endl;


    return 0;
}


