#include <bits/stdc++.h>
using namespace std;


int main(){
    int n;

    int target;
    cin>>n>>target;
    vector<pair<int, int>> input(n);


    for(int i = 0; i<n; i++){
        int x;
        cin>>x;
        input[i] = make_pair(x, i);
    }


    sort(input.begin(), input.end());


    for(int i = 0; i<n; i++){
        int me = input[i].first;
        int other = target - me;

        /// binary search;

        auto it = lower_bound(input.begin(), input.begin()+i, make_pair(other, 0));

        if(it != input.begin()+i  && (*it).first == other){
            cout<<input[i].second<<" "<<(*it).second<<endl;
            return 0;
        }
    }

    cout<<"NO";

}
