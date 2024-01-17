// And be patient. Allah will not waste the reward of the virtuous.
// اللَّهُ أَكْبَرُ //And ˹surely˺ your Lord will give so much to you that you will be pleased.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int  n, k, l, c, d, p, nl, np; cin >> n >> k >>l >>c >> d >>p>>nl>>np ;
    int  ml = (k*l), toast_drink = ml/nl , toast_limes = c*d , toast_salt = p/np;
    int ans = min({toast_limes, toast_drink, toast_salt});
    cout<< ans/n;

}