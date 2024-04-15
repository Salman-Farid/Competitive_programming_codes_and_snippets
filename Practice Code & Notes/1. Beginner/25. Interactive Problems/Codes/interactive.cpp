#include <bits/stdc++.h>
using namespace std;
int hidden = 500000;

int q_cnt = 0;
bool query(int x){
    q_cnt++;

    if(q_cnt > 25) assert(0);

//To check uncomment this
//    cout<<x<<endl;
//    if(hidden < x) return true;
//    else return false;

    cout<<x;
    string ans;
    cin>>ans;

    if(ans == "<") return true;
    else return false;
}

int main(){

    int lo = 1, hi = 1000000;

    while(lo < hi){
        int mid = (lo+hi+1)/2;

        bool res = query(mid);

        if(res){
            hi = mid-1;
        }
        else{
            lo = mid;
        }
    }

    cout<<"! "<<lo<<endl;
    return 0;
}
