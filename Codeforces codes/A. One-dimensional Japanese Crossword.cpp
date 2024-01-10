// And be patient. Allah will not waste the reward of the virtuous.
// اللَّهُ أَكْبَرُ //And ˹surely˺ your Lord will give so much to you that you will be pleased.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, c = 0; cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        char s;
        cin >> s;
        if (s == 'W')
        {
            if (c != 0) v.push_back(c);
            c = 0;
        }
        else if (s == 'B') c += 1;
        if(i==n-1 && c != 0) v.push_back(c);
    }
    cout << v.size() << endl;
    for (auto p : v) cout << p << " ";
}