// And be patient. Allah will not waste the reward of the virtuous.
// اللَّهُ أَكْبَرُ //And ˹surely˺ your Lord will give so much to you that you will be pleased.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k,c=0;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        int j;cin >>j;
        if(5-j >= k) c++;
    }
    cout<< c/3;
}