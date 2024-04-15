#include <bits/stdc++.h>
using namespace std;

bool mark[50000000+5];

void sieve(int n){
    mark[0] = mark[1] = true;
    for(int i = 2; i<=n; i++){
        if(mark[i])
            continue;

        for(int m = 2*i; m<=n; m+=i){
            mark[m] = true;
        }
    }
}

int primes[50000000+5];
int primecnt = 0;

void optimizedSieve(int n){
    mark[0] = mark[1] = true;

    for(int i = 4; i<=n; i+=2)
        mark[i] = true;

    for(int i = 3; i*i<=n; i+=2){
        if(mark[i])
            continue;

        for(int m = i*i; m<=n; m+=i+i){
            mark[m] = true;
        }
    }

    for(int i = 2; i<=n; i++){
        if(mark[i] == false){
            primes[primecnt] = i;
            primecnt++;
        }
    }
}

///O(n log log n)

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n = 50000000;

    optimizedSieve(n);

    cout<<primes[4]<<endl;

    int cnt = 0;
    for(int i = 1; i<=n; i++){
        if(mark[i] == false)
            cnt++;
    }

    cout<<cnt<<endl;

    return 0;
}

/// O(n * sqrt(n))


