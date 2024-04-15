#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

struct node{
    ll val;
    node* lc;
    node* rc;
};

int arr[2*100000+10];


vector<node*> nodes;

node* build(int l, int r){
    node* me = new node();
    nodes.push_back(me);

    if(l == r){

        me->val = arr[l];
        me->lc = NULL;
        me->rc = NULL;
        return me;
    }

    int mid = (l+r)/2;

    me->lc = build(l, mid);
    me->rc = build(mid+1, r);

    me->val = me->lc->val + me->rc->val;

    return me;
}

ll query(node* me, int l, int r, int L, int R){
    if(R < l || r < L) return 0;
    if(L <= l && r <= R) return me->val;

    int mid = (l+r)/2;

    ll p = query( me->lc , l, mid, L, R);
    ll q = query( me->rc , mid+1, r, L, R);

    return p+q;
}

node* update(node* me, int l, int r, int k, int x){
    node* newme = new node();
    nodes.push_back(newme);

    if(l == r){

        newme->lc = NULL;
        newme->rc = NULL;
        newme->val = x;
        return newme;
    }

    int mid = (l+r)/2;
    if(k <= mid){
        newme->lc = update(me->lc, l, mid, k, x);
        newme->rc = me->rc;
    }
    else{
        newme->rc = update(me->rc, mid+1, r, k, x);
        newme->lc = me->lc;
    }

    newme->val = newme->lc->val + newme->rc->val;

    return newme;
}

node* versions[2*100000+10];


int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, q;
    cin>>n>>q;

    for(int i = 1; i<=n; i++) cin>>arr[i];

    versions[1] = build(1, n);

    int v = 1;

    for(int i = 0; i<q; i++){
        int type;
        cin>>type;

        if(type == 1){
            int k, a, x;
            cin>>k>>a>>x;

            versions[k] = update(versions[k], 1, n, a, x);
        }
        else if(type == 2){
            int k, a, b;
            cin>>k>>a>>b;
            ll ans = query(versions[k], 1, n, a, b);

            cout<<ans<<"\n";
        }
        else{
            int k;
            cin>>k;

            v++;
            versions[v] = versions[k];
        }
    }

    for(node* me : nodes){
        delete me;
    }
    nodes.clear();
}
