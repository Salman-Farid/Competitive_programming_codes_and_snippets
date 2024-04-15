#include <bits/stdc++.h>
using namespace std;


int main(){
    int x;
    cin>>x;


    /// n*(n+1)*(2*n+1)/6 = x


    long long int lo = 0, hi = 5000;


    while(lo <= hi){
        long long int mid = (lo+hi)/2;

        if(mid*(mid+1)*(2*mid+1)/6 <= x){
            lo = mid+1;
        }
        else{
            hi = mid-1;
        }
    }

    cout<<hi<<endl;
}
