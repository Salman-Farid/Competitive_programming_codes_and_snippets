// And be patient. Allah will not waste the reward of the virtuous.
// اللَّهُ أَكْبَرُ //And ˹surely˺ your Lord will give so much to you that you will be pleased.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int x, n, c = 0;
    cin >> x >> n;
    for (long long int i = 1; i <= x; i++)
        c += ((i + n) / 5) - (i / 5);
    cout << c;
}