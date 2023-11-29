#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
typedef long double ld;

#ifdef LOCAL
#define Gene template< class
#define Rics printer& operator,
Gene c> struct rge{c b, e;};
Gene c> rge<c> range(c i, c j){ return {i, j};}
struct printer{
    ~printer(){cerr<<endl;}
    Gene c >Rics(c x){ cerr<<boolalpha<<x; return *this;}
    Rics(string x){cerr<<x;return *this;}
    Gene c, class d >Rics(pair<c, d> x){ return *this,"(",x.first,", ",x.second,")";}
    Gene ... d, Gene ...> class c >Rics(c<d...> x){ return *this, range(begin(x), end(x));}
    Gene c >Rics(rge<c> x){
        *this,"["; for(auto it = x.b; it != x.e; ++it)
            *this,(it==x.b?"":", "),*it; return *this,"]";}
};
#define debug() cerr<<"LINE "<<__LINE__<<" >> ", printer()
#define dbg(x) "[",#x,": ",(x),"] "
#define tham getchar()
#endif

#define FASTIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define eq(x, y) (fabs((x)-(y))<error)
#define bt(i) (1LL<<(i))

mt19937_64 rng((unsigned)chrono::system_clock::now().time_since_epoch().count());
//const ll mod = ;
//const ld error = ;
const ld PI = acosl(-1);

//const int/ll inf = ;
const int nmax = 1e5+10;
///===========================================  template  =======================================================

#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp> // Including tree_order_statistics_node_update
using namespace __gnu_pbds;
typedef pair<int, int> D;				//underlying type in OST
typedef tree<D,null_type,less<D>,rb_tree_tag,tree_order_statistics_node_update> OST;

//iterator to kth largest element 0-indexed, = to end(OST) if too large
//OST.find_by_order(k);
//count of element strictly smaller than x
//OST.order_of_key(x);

int master[nmax], sz[nmax];
OST sets[nmax];

void makeset(int u){
    master[u] = u;
    sz[u] = 1;
}

int fnd(int u){
    if(master[u] == u) return u;
    return u = fnd(master[u]);
}

bool unite(int u, int v){
    u = fnd(u), v = fnd(v);
    if(u == v) return false;
    if(sz[u] < sz[v]) swap(u, v);
    sz[u] += sz[v];
    master[v] = u;
    for(auto &p : sets[v]){
        sets[u].insert(p);
    }
    sets[v].clear();
    return true;
}

int main(){
    FASTIO;

    int tc;
    cin>>tc;
    for(int cs = 1; cs <= tc; cs++){
        int n, q;
        cin>>n>>q;

        for(int i = 1; i<=n; i++) makeset(i);

        cout<<"Case "<<cs<<":\n";
        for(int i = 0; i<q; i++){
            int type;
            cin>>type;
            if(type == 0){
                int u, v;
                cin>>u>>v;
                unite(u, v);
            }
            else if(type == 1){
                int u, t;
                cin>>u>>t;
                u = fnd(u);
                sets[u].insert(make_pair(t, i));
            }
            else{
                int u, l, r;
                cin>>u>>l>>r;
                u = fnd(u);
                int ans = (int)sets[u].order_of_key(make_pair(r, q+1)) - (int)sets[u].order_of_key(make_pair(l, -1));
                cout<<ans<<"\n";
            }
        }

        for(int i = 1; i<=n; i++) sets[i].clear();
    }

    return 0;
}
