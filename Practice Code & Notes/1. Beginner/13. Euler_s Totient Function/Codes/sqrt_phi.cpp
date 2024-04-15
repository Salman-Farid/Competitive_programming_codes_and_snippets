#include <bits/stdc++.h>
using namespace std;

vector<int> factorize(int n){
    vector<int> primes;
    for(int i = 2; i*i <= n; i++){
        if(n % i == 0){
            primes.push_back(i);
            while(n % i == 0)
                n /= i;
        }
    }

    if(n > 1)
        primes.push_back(n);
    return primes;
}

int phi(int n){
    vector<int> primes = factorize(n);

    for(int p : primes){
        n = n - n/p;
    }

    return n;
}

/// O(sqrt(n))

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cout<<phi(100)<<endl;

    return 0;
}
