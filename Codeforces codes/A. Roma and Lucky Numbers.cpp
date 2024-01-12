// And be patient. Allah will not waste the reward of the virtuous.
// اللَّهُ أَكْبَرُ //And ˹surely˺ your Lord will give so much to you that you will be pleased.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, c = 0,p=0;
    string s;
    cin >> n >> k;
    while (n--)
    {
        cin >> s;
        c=0;
        for (char a : s) if (a == '7' || a == '4') c++;
        if(c<=k) p++;
    }
    cout << p;
}