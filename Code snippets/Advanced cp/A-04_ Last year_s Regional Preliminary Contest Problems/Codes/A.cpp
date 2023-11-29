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
const int nmax = 1.2e6+10;
///===========================================  template  =======================================================

const ll hprime = 1e9+9;
const ll base = 1e8+5e4+1;

ll powers[nmax];

void precal(int n){
    powers[0] = 1;
    for(int i = 1; i<n; i++)
        powers[i] = powers[i-1] * base % hprime;
}

struct Hash{
    vector<ll> H;
    void resize(int n){ H.resize(n+1);}

    void init(string &s){
        H.resize(s.size()+1);
        for(int i = 0; i<s.size(); i++) fillchar(i, s[i]);
    }

    void fillchar(int i, char c){
        H[i+1] = H[i+1] = ( H[i] * base + c ) % hprime;
    }

    ll hashval(int L, int R){
        ll a = H[R+1] - H[L] * powers[R+1-L] % hprime;
        if(a < 0) a += hprime;
        return a;
    }

} H1, H2;

int lcp(Hash &A, int a, Hash &B, int b){
    int lo = 0, hi = min((int)A.H.size()-a, (int)B.H.size()-b)-1;
    while(lo <= hi){
        int mid = (lo+hi)/2;
        if(A.hashval(a, a+mid-1) == B.hashval(b, b+mid-1))
            lo = mid+1;
        else
            hi = mid-1;
    }
    return hi;
}

int main(){
    FASTIO;

    precal(nmax);

    int tc;
    cin>>tc;
    for(int cs = 1; cs <= tc; cs++){
        string s, t;
        int k;
        cin>>s>>t>>k;
        H1.init(s);
        H2.init(t);

        int ans = 0;

        int a = (int)s.size(), b = (int)t.size();
        for(int i = 0; i<=a-b; i++){
            int a1 = i, a2 = 0;
            int dist = 0;
            while(a2 < t.size()){
                if(s[a1] != t[a2]){
                    if(dist++ > k) break;
                    a1++, a2++;
                }
                else{
                    int tmp = lcp(H1, a1, H2, a2);
                    a1 += tmp;
                    a2 += tmp;
                }
            }
            if(dist <= k)
                ans++;
        }

        cout<<"Case "<<cs<<": "<<ans<<"\n";
    }



    return 0;
}
