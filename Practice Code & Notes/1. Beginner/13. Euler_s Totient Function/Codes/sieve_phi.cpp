#include <bits/stdc++.h>
using namespace std;

int phi[100000+5];
bool mark[100000+5];

void sieve(){
    for(int i = 1; i<=100000; i++)
        phi[i] = i;

    for(int i = 2; i<=100000; i++){
        if(mark[i])
            continue;
        phi[i] = i-1;
        for(int j = i+i; j<=100000; j+=i){
            mark[j] = true;

            phi[j] = phi[j] - phi[j]/i;
        }
    }
}

/// O(sqrt(n))

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    sieve();

    cout<<phi[100]<<endl;

    return 0;
}

