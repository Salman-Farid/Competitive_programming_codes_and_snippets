// And be patient. Allah will not waste the reward of the virtuous.
// اللَّهُ أَكْبَرُ //And ˹surely˺ your Lord will give so much to you that you will be pleased.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >>n; string s ; cin >>s; vector<int> v(n);
    long long int c, q= INT_MAX;
    for( auto &p:v) cin >> p;
    for(int i = 0; i <n-1; i++){
        if(s[i] == 'R' && s[i+1]=='L'){
            long long int b = ((v[i+1]-v[i])/2);
            q = min(b,q);}
    }
    cout<<((q==INT_MAX)?-1:q);
}
