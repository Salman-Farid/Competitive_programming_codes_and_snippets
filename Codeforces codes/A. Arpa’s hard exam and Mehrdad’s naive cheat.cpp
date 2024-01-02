// And be patient. Allah will not waste the reward of the virtuous.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    if (n == 0) cout<< 1;
    else if ((n - 1) % 4 == 0) cout << 8;
    else if ((n - 2) % 4 == 0) cout << 4;
    else if ((n - 3) % 4 == 0) cout << 2;
    else cout << 6;
}