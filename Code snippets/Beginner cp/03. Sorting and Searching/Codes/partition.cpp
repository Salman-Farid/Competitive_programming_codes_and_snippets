#include <bits/stdc++.h>
using namespace std;


int main(){
    vector<bool> v{true, true, true, true, false, false, false, false, false};

    int lo = 0, hi = (int) v.size() - 1;

    while(lo <= hi){
        int mid = (lo+hi)/2;
        if(v[mid] == true){
            lo = mid+1;
        }
        else{
            hi = mid-1;
        }
    }

    cout<<hi<<endl;
    cout<<lo<<endl;
}
