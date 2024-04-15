#include <bits/stdc++.h>
using namespace std;

bool isPrime(long long int n){
    if(n == 1)
        return false;
    for(long long int i = 2; i*i <= n; i++){        /// i^2 <= n -> i <= sqrt(n)
        if(n % i == 0)
            return false;
    }
    return true;
}
/// O(sqrt(n))

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cout<<isPrime(1000000007)<<endl;

    return 0;
}

/// 10^14 -> 10^7
