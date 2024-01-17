// And be patient. Allah will not waste the reward of the virtuous.
// اللَّهُ أَكْبَرُ //And ˹surely˺ your Lord will give so much to you that you will be pleased.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, a, b, c = 0; cin >> n >> k;
    while (n--)
    {
        cin >> a >> b;
        c += (b - a + 1);
    }
    cout << ((c % k == 0) ? 0 : (k - c % k));
}