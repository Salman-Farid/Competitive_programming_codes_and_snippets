#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

const int nmax = 100000+10;
const ll inf = 1e18;

vector<pair<ll, int>> adj[nmax];          /// adj[i] = list of neighbours -> (v, cost)
ll dist[nmax];
int link[nmax];

//int deletedU, deletedV;

void dijkstra(int source, int V){
    for(int i = 1; i<=V; i++){
        dist[i] = inf;
        link[i] = -1;
    }
    dist[source] = 0;

    priority_queue<  pair<ll, int> , vector<pair<ll, int>> , greater<pair<ll, int>> >pq;     /// (dist, u)

    pq.push(make_pair((ll)0, source));


    while(!pq.empty()){         /// E
        int u = pq.top().second;
        ll d = pq.top().first;

        cout<<"popping "<<u<<" "<<d<<endl;

        pq.pop();               /// E*log(E)

        if(dist[u] != d) continue;
        cout<<"true copy"<<endl;

        for(auto v : adj[u]){           /// overall O(E)
//            if(u == deletedU && v.first == deletedV) continue;
//            if(u == deletedV && v.first == deletedU) continue;


            if(d + v.second < dist[v.first]){
                ///relax
                dist[v.first] = d+v.second;
                link[v.first] = u;
                pq.push(make_pair(dist[v.first], v.first));     /// E*log(E)
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int V, E;
    cin>>V>>E;

    for(int i = 0; i<E; i++){
        int u, v, c;

        cin>>u>>v>>c;

        adj[u].push_back(make_pair(v, c));
        adj[v].push_back(make_pair(u, c));
    }

    dijkstra(1, V);

    for(int i = 1; i<=V; i++){
        cout<<"distance to "<<i<<" = "<<dist[i]<<endl;
    }


    int cur = V;
    vector<int> path;

    while(cur != 1){
        path.push_back(cur);
        cur = link[cur];
    }
    path.push_back(1);

    reverse(path.begin(), path.end());

    for(int x : path){
        cout<<x<<" ";
    }
}
