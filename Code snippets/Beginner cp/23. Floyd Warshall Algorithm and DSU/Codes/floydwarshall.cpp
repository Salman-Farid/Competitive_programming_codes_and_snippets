#include <bits/stdc++.h>
using namespace std;

const int nmax = 500;

long long int dist[nmax][nmax];
int link[nmax][nmax];   /// link[u][v] = w where you have to go from u to w to get to v



void floydwarshall(int v){
    for(int k = 1; k<=v; k++){
        for(int i = 1; i<= v; i++){
            for(int j = 1; j<=v; j++){
                if(dist[i][j] < dist[i][k] + dist[k][j]){
                    dist[i][j] = dist[i][k] + dist[k][j];
                    link[i][j] = link[i][k];
                }
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;

    cin>>n;
    cin>>m;
    for(int u = 1; u<=n; u++)
        for(int v = 1; v <= n; v++){
            if(u == v)
                dist[u][v] = 0;
            else
                dist[u][v] = 1e18;//LLONG_MAX;   /// 2^63-1
        }

    for(int i = 0; i<m; i++){
        int u, v, c;
        cin>>u>>v>>c;

        dist[u][v] = min(c, dist[u][v]);
        link[u][v] = v;
    }


    floydwarshall(n);

    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n; j++){
            cout<<dist[i][j]<<" ";
        }
        cout<<endl;
    }

    int u = 1, v = n;

    cout<<u<<endl;
    while(u != v){
        u = link[u][v];
        cout<<u<<endl;
    }


    return 0;
}

