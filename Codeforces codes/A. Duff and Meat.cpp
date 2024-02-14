// And be patient. Allah will not waste the reward of the virtuous.
// اللَّهُ أَكْبَرُ //And ˹surely˺ your Lord will give so much to you that you will be pleased.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,p,t=INT_MAX,m=0; cin >> n;
    while(n--){
        cin>>a>>p;
        if(p<t) t = p;
        m += (t*a);
    }
    cout<<m<<endl;

}