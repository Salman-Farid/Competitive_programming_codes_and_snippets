// And be patient. Allah will not waste the reward of the virtuous.
// اللَّهُ أَكْبَرُ //And ˹surely˺ your Lord will give so much to you that you will be pleased.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,c = 0,i = 0;
    cin >> n;
    while (c<=n)
    {
        i++;
        c += (i*(i+1)/2);
        
    }
    cout <<i-1<< endl;
}