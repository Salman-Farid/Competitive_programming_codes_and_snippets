// And be patient. Allah will not waste the reward of the virtuous.
// اللَّهُ أَكْبَرُ //And ˹surely˺ your Lord will give so much to you that you will be pleased.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c=0;cin >> n;
    while(n--){
        cin >>a>>b;
        if(a<b) c++;
    }
    cout<<c;
}