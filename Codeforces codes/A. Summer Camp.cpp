// And be patient. Allah will not waste the reward of the virtuous.
// اللَّهُ أَكْبَرُ //And ˹surely˺ your Lord will give so much to you that you will be pleased.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n ; cin >> n;
    string s = "";
    for(int i = 0; i < 1000; i++) s+= to_string(i);
    cout<<s[n]<<endl;
}