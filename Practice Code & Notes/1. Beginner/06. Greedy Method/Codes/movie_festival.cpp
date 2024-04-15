#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;



bool comp(pair<int, int> p, pair<int, int> q){
    return (p.second < q.second)? true : false;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n;
    cin>>n;


    vector<pair<int, int>> input(n);        /// intervals

    for(int i = 0; i<n; i++){
        cin>>input[i].first>>input[i].second;
    }


    sort(input.begin(), input.end(), comp);


    int ans = 0, last_taken = -1;


    for(int i = 0; i<n; i++){
        if(input[i].first < last_taken)
            continue;

        ans++;
        last_taken = input[i].second;
    }


    cout<<ans<<"\n";


    return 0;
}

