// And be patient. Allah will not waste the reward of the virtuous.
// اللَّهُ أَكْبَرُ //And ˹surely˺ your Lord will give so much to you that you will be pleased.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, l = 0, m = 0;cin>>n; char c;
    while (n--)
    {
        cin >> c;
        c - '0' == 0 ? l++ : m++;
    }
    cout << abs(l - m);
}



