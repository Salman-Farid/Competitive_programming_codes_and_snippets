// And be patient. Allah will not waste the reward of the virtuous.
// اللَّهُ أَكْبَرُ //And ˹surely˺ your Lord will give so much to you that you will be pleased.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s; cin >> s;
    for (int i =0; i < s.length(); i++)
    {
        int v =(s[i]-'0');
        if(s[0]=='9' && i==0) cout<<'9';
        else if(v>4) cout<< 9-v;
        else cout<<s[i];
    }
}