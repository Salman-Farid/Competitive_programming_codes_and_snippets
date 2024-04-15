#include <bits/stdc++.h>
using namespace std;

int binsearch(vector<int> &v, int x){
    int lo = 0, hi = (int)v.size() - 1;

    while(lo <= hi){
        int mid = (lo+hi)/2;
        if(v[mid] == x) return mid;

        if(v[mid] > x)
            hi = mid-1;
        else
            lo = mid+1;
    }
    return -1;
}

int main(){
    vector<int> v{10, 20, 30, 40, 50, 60, 70, 80, 100};
    cout<<"55 at " <<binsearch(v, 55)<<endl;
    cout<<"70 at " <<binsearch(v, 70)<<endl;
}
