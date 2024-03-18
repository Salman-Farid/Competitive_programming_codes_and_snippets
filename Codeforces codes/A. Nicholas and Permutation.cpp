// And be patient. Allah will not waste the reward of the virtuous.
// اللَّهُ أَكْبَرُ //And ˹surely˺ your Lord will give so much to you that you will be pleased.
// And be patient. Allah will not waste the reward of the virtuous.
// اللَّهُ أَكْبَرُ //And ˹surely˺ your Lord will give so much to you that you will be pleased.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n , p1,p2, l,o,w; cin >> n;
    for(int i=1; i<=n; i++){
        cin>> w;
        if(w == 1) p1=i;
        if(w==n) p2 =i;
    }
    l = min( p1,p2);
    o =max(p1,p2);
    cout<<max(n-l,o-1);

}