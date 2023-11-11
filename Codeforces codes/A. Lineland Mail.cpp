// And be patient. Allah will not waste the reward of the virtuous.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n; int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<pair<int,int>>v;

    for (int i = 0; i < n; i++)
    {
        int current = arr[i], p = INT_MAX, N = INT_MAX;
        if (i-1>=0) p = abs(current - arr[i -1]);
        if (i+1<n) N = abs(current - arr[i+1]);
        int min_v= min ( p, N);
        int max_v= max(abs(current - arr[0]),abs(current  - arr[n-1]));
        v.push_back({min_v,max_v});
    }

    for (auto m : v) cout<< m.first<< " "<< m.second<<endl;
}