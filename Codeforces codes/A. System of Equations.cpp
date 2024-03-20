// And be patient. Allah will not waste the reward of the virtuous.
// اللَّهُ أَكْبَرُ //And ˹surely˺ your Lord will give so much to you that you will be pleased.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int  n , m, b ,c=0 ; cin >> n >> m;
    for(int a = 0; a*a <= n; a++){
        b = n - (a*a);
        if(m == a+(b*b)) c++;
    }
    cout<<c;
}