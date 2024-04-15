#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

struct node{
    int val;
    node* lc;
    node* rc;
};

int arr[100000+10];


vector<node*> nodes;

node* build(int l, int r){
    node* me = new node();
//    nodes.push_back(me);

    if(l == r){

        me->val = 0;
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

node* update(node* me, int l, int r, int k, int x){
    node* newme = new node();
//    nodes.push_back(newme);

    if(l == r){

        newme->lc = NULL;
        newme->rc = NULL;
        newme->val = me->val + x;
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

int query(node *n1, node *n2, int l, int r, int k){
    if(l == r){
        return l;
    }


    int mid = (l+r)/2;

    int left = n1->lc->val - n2->lc->val;

    if(k <= left){
        return query(n1->lc, n2->lc, l, mid, k);
    }
    else{
        return query(n1->rc, n2->rc, mid+1, r, k-left);
    }
}

node* versions[100000+10];

vector<int> compressed;


int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, q;
    cin>>n>>q;

    for(int i = 1; i<=n; i++) {
        cin>>arr[i];
        compressed.push_back(arr[i]);
    }

    sort(compressed.begin(), compressed.end());
    compressed.resize(unique(compressed.begin(), compressed.end()) - compressed.begin());

    versions[0] = build(0, compressed.size());


    for(int i = 1; i<=n; i++){
        int mapped = lower_bound(compressed.begin(), compressed.end(), arr[i]) - compressed.begin();
//        cout<<"mapped "<<mapped<<endl;
        versions[i] = update(versions[i-1], 0, compressed.size(), mapped, +1);
    }

    for(int i = 0; i<q; i++){
        int l, r, k;

        cin>>l>>r>>k;

        int x = query(versions[r], versions[l-1], 0, compressed.size(), k);

        cout<<compressed[x]<<"\n";
    }


}

