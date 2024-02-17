#include <bits/stdc++.h>
using namespace std;

int main(){
//    int n;
//    cin>>n;

//    vector<pair<int, int>> events;
//    for(int i = 0; i<n; i++){
//        int l, r;
//        cin>>l>>r;
//        events.push_back(make_pair(l, 1));
//        events.push_back(make_pair(r, -1));
//    }
//
//    sort(events.begin(), events.end());
//
//    int active = 0, ans = 0;
//    for(pair<int, int> e : events){
//        if(e.second == 1)  /// beginning of interval
//            active++;
//        else               /// ending of interval
//            active--;
//
//        ans = max(ans, active);
//    }

//    cout<<ans;


    int n;
    cin>>n;
    vector<pair<int, int>> events;

    for(int i = 0; i<n; i++){
        int l, r;
        cin>>l>>r;
        events.push_back(make_pair(l, -1));
        events.push_back(make_pair(r, 1));
    }


    sort(events.begin(), events.end());

    int ans = 0, active = 0;
    for(auto e : events){
        if(e.second == -1)
            active++;
        else
            active--;

        ans = max(ans, active);
    }

    cout<<ans<<endl;

}

