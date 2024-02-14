// And be patient. Allah will not waste the reward of the virtuous.
// اللَّهُ أَكْبَرُ //And ˹surely˺ your Lord will give so much to you that you will be pleased.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int r,k,f,t,p,c=INT_MIN;
    cin>>r>>k;
    for(int i =0 ; i<r ; i++){
        cin>>f>>t;
        if(t>k) p = f-(t-k);
        else p=f; if(c<p) c=p;
    }
    cout<<c<<endl;
}