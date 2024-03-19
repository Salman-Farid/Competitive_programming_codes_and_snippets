// And be patient. Allah will not waste the reward of the virtuous.
// اللَّهُ أَكْبَرُ //And ˹surely˺ your Lord will give so much to you that you will be pleased.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s; cin >> s;
    map<string, int >m;
    for(int i = 0; i <10;i++){
        string t; cin >> t;
        m[t]=i;
    }

    for(int i = 0; i < s.length(); i+=10) {
        string b = s.substr(i,10);
        cout<<m[b];
    }
}