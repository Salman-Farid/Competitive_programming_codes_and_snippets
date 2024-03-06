#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

vector<ll> getDivisors(ll n){
    vector<ll> divisors;
    for(ll i = 1; i*i <= n; i++){
        if(n % i == 0){
            divisors.push_back(i);
            if(n/i != i)
                divisors.push_back(n/i);
        }
    }
    sort(divisors.begin(), divisors.end());
    return divisors;
}

int tau(ll n){
    int cnt = 0;
    for(ll i = 1; i*i <= n; i++){
        if(n % i == 0){
            cnt++;
            if(n/i != i)
                cnt++;
        }
    }
    return cnt;
}

int sigma(ll n){
    int sum = 0;
    for(ll i = 1; i*i <= n; i++){
        if(n % i == 0){
            sum += i;
            if(n/i != i)
                sum += n/i;
        }
    }
    return sum;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n = 100;
    vector<ll> divisors = getDivisors(n);

    for(ll x : divisors){
        cout<<x<<endl;
    }

    cout<<"sigma "<<sigma(n)<<endl;

    return 0;
}
