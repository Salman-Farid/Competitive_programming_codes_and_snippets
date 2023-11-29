#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

const int vmax = 505;

using F = ll;
F infflow = 1e18+5;

struct edge
{
    int v, w;		///edge is v -> w, flow is in that direction too
    F cap, flow;


    edge(int _v = 0, int _w = 0, F _c = 0){		///CHANGE
        v = _v, w = _w, cap = _c, flow = 0;
    }


	///u represents from which vertex we request the function
    F flowfrom(int u) {return (u == v)? flow : -flow;}
    int other(int u) {return (u == v)? w: v;}
    F rescap(int u) {return (u == v)? cap - flow: flow;}
    void sendflow(int u, F f) {flow += (u == v)? f: -f;}
};



vector<edge> E;
vector<int> adj[vmax];




//add edge from v to w
inline void addEdge(int v, int w, F c)          		///CHANGE
{
    E.emplace_back(v, w, c);    						///CHANGE
    adj[v].push_back(E.size()-1);
    adj[w].push_back(E.size()-1);
}

int level[vmax]; 		///level array
int vis[vmax], clk;
int ptr[vmax];			///ptr to edges in adjacency list

bool bfs(int s, int t)
{
	clk++;
    queue<int> q;
    q.push(s);
    level[s] = 0;
    vis[s] = clk;
    while(!q.empty()){
        s = q.front();
        q.pop();
        if(s == t) break;
        ptr[s] = 0;
        for(auto i: adj[s]){
            int v = E[i].other(s);
            if(vis[v] == clk || E[i].rescap(s) == 0) continue;

			vis[v] = clk;
            level[v] = level[s]+1;
            q.push(v);
        }
    }
    return (vis[t] == clk);
}


F augment(int u, F flow, int t)		///dfs
{
    if(u == t || flow == 0) return flow;

    for(int &i = ptr[u]; i<adj[u].size() ; i++){
        edge &e = E[adj[u][i]];
        int v = e.other(u);
        if(vis[v] != clk) continue;
        if(level[v] != level[u] + 1 || e.rescap(u) == 0) continue;

        F sentflow = augment(v, min(flow, e.rescap(u)), t);
        if(sentflow){
	        e.sendflow(u, sentflow);
			return sentflow;
        }
    }
	level[u] = -1;
    return 0;
}

F maxflow(int s, int t)		///s - source, t - sink
{
    F ret = 0, tmp;
    while(bfs(s, t))
    	while(tmp = augment(s, infflow, t))
	        ret += tmp;
    return ret;
}

int main(){
    int n, m;
    cin>>n>>m;

    for(int i = 0; i<m; i++){
        int u, v, w;
        cin>>u>>v>>w;

        addEdge(u, v, w);
    }

    ll ans = maxflow(1, n);

    cout<<ans<<endl;

//    for(auto e : E){
//        cout<<e.v<<" "<<e.w<<" "<<e.flow<<endl;
//    }


    for(int i : adj[1]){
        auto e = E[i];

        if(e.v == 1)
            cout<<e.v<<" "<<e.w<<" "<<e.flow<<endl;
    }
}
