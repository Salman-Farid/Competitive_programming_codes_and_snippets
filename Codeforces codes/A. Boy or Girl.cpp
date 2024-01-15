// And be patient. Allah will not waste the reward of the virtuous.
// اللَّهُ أَكْبَرُ //And ˹surely˺ your Lord will give so much to you that you will be pleased.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string n; cin >> n; set<char> s;
    for (int i = 0; i < n.size(); i++) s.insert(n[i]);
    cout<<((s.size()%2==0)?"CHAT WITH HER!":"IGNORE HIM!");
  
}