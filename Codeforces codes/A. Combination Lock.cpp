// And be patient. Allah will not waste the reward of the virtuous.
// اللَّهُ أَكْبَرُ //And ˹surely˺ your Lord will give so much to you that you will be pleased.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0 ; string s , p; cin >>n>>s>>p;
    for(int i=0; i<n; i++) c+= min(10-abs(s[i]-p[i]),abs(s[i]-p[i]));
    cout<<c;
}