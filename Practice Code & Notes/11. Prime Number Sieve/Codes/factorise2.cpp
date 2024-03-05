#include <bits/stdc++.h>
using namespace std;

int mark[50000000+5];

void sieve(int n){
    mark[0] = mark[1] = 0;
    for(int i = 2; i<=n; i++){
        if(mark[i] > 0)
            continue;

        for(int m = 2*i; m<=n; m+=i){
            mark[m] = i;
        }
    }
}
///O(n log log n)

vector<int> factorise(int n){
    vector<int> ret;

    if(n == 1) return ret;

    while(mark[n] != 0){
        ret.push_back(mark[n]);
        n /= mark[n];
    }

    ret.push_back(n);

    return ret;
}

/// O(log n)

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n = 500000;

    sieve(n);


    vector<int> v = factorise(111);
    for(int x : v){
        cout<<x<<" ";
    }

    return 0;
}

/// O(n * sqrt(n))


