// And be patient. Allah will not waste the reward of the virtuous.
// اللَّهُ أَكْبَرُ //And ˹surely˺ your Lord will give so much to you that you will be pleased.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int l, r,a;
    cin >> l >> r >> a;
    int n = min(l,r);
    int m = min(abs(l-r),a);
    cout<< 2*(n+m+(a-m)/2) ;
}