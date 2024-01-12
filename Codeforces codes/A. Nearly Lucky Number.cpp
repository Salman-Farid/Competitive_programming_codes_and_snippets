// And be patient. Allah will not waste the reward of the virtuous.
// اللَّهُ أَكْبَرُ //And ˹surely˺ your Lord will give so much to you that you will be pleased.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string n;cin >> n; int ans = 0;
    for (char a : n)
        if (a == '4' || a == '7') ans++;
    cout << ((ans == 4 || ans == 7) ? "YES" : "NO");
}