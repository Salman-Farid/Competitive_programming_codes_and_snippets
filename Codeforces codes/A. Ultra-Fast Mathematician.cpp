// And be patient. Allah will not waste the reward of the virtuous.
// اللَّهُ أَكْبَرُ //And ˹surely˺ your Lord will give so much to you that you will be pleased.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, p; cin >> s >> p;
    for (int i = 0; i < s.length(); i++) cout<<((s[i] == p[i])?0:1);
}