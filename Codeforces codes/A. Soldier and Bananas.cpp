// And be patient. Allah will not waste the reward of the virtuous.
// اللَّهُ أَكْبَرُ //And ˹surely˺ your Lord will give so much to you that you will be pleased.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k, n, w,c=0;
    cin >> k>>n>>w;
    for (int i = 1; i <= w; i++) c+=(i*k);
    cout<<((c>n)?(c-n):0);
}
