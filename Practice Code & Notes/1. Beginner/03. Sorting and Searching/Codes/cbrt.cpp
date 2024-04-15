#include <bits/stdc++.h>
using namespace std;


int main(){
    double x;
    cin>>x;

    double lo = 0, hi = x;

    while(hi - lo >= 1e-4){
        double mid = (lo+hi)/2;

        if(mid*mid*mid <= x){
            lo = mid;
        }
        else{
            hi = mid;
        }
    }

    cout<<lo<<endl;
    cout<<hi<<endl;

}
