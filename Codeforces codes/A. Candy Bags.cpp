// And be patient. Allah will not waste the reward of the virtuous.
// اللَّهُ أَكْبَرُ //And ˹surely˺ your Lord will give so much to you that you will be pleased.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;  int j =n*n, k = n/2;
    for(int i = 1; i <= n*k; i++,j--){
        cout<<i<<" "<<j<<" ";
        if(i%k==0) cout<<endl;
    }
}
