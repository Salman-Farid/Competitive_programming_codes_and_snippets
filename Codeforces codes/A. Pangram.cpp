// And be patient. Allah will not waste the reward of the virtuous.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin >> n;
    string p; cin >> p;
    transform(p.begin(), p.end(), p.begin(), ::tolower);
    set<char> uniqueChars(p.begin(), p.end());
    if (uniqueChars.size() == 26)cout << "YES" ;
    else cout << "NO";
}