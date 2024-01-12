// And be patient. Allah will not waste the reward of the virtuous.
// اللَّهُ أَكْبَرُ //And ˹surely˺ your Lord will give so much to you that you will be pleased.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n ;cin >> n;
    for(int i = 1; i <= n; i++){
        if(i*(i+1)==2*n){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
}