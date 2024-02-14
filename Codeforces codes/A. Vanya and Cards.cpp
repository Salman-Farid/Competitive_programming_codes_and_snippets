// And be patient. Allah will not waste the reward of the virtuous.
// اللَّهُ أَكْبَرُ //And ˹surely˺ your Lord will give so much to you that you will be pleased.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x, i, p = 0, q = 0;
    cin >> n >> x;
    while (n--)
    {
        cin >> i;
        p += i;
    }
    if (abs(p) % x == 0) cout << (abs(p) / x);
    else cout << (abs(p) / x) + 1;
}

//.........................................................
//Option: 2
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x, i, p = 0, q = 0; cin >> n >> x;
    while (n--)
    {
        cin >> i; p += i;
    }
    cout<<ceil(abs(p)*1.0/x);
}
