// And be patient. Allah will not waste the reward of the virtuous.
// اللَّهُ أَكْبَرُ //And ˹surely˺ your Lord will give so much to you that you will be pleased.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x, y, m, l, r; cin >> n; int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    cin >> m;
    while (m--)
    {
        cin >> x >> y;
        x = x - 1;
        r = arr[x] - y; arr[x] = 0;
        arr[x - 1] = arr[x - 1] + y - 1;
        arr[x + 1] = arr[x + 1] + r;
        
    }
    for (auto p : arr)cout << abs(p) << endl;
}