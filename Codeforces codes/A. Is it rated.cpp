// And be patient. Allah will not waste the reward of the virtuous.
// اللَّهُ أَكْبَرُ //And ˹surely˺ your Lord will give so much to you that you will be pleased.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,x, y; cin >> n;k=n;vector<int> v;
    while (n--)
    {
        cin >> x >> y; v.push_back(x);
        if (x != y) return (cout << "rated",0);
    }
    for (int i = 1; i < k; i++) if (v[i-1] < v[i]) return (cout << "unrated",0);
    cout << "maybe";
}