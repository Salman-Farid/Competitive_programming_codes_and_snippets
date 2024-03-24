// And be patient. Allah will not waste the reward of the virtuous.
// اللَّهُ أَكْبَرُ //And ˹surely˺ your Lord will give so much to you that you will be pleased.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int c=0;
    for(int i = 0; i <5; i++){
        int n;
        cin>>n;
        c+=n;
    }
    if(c==0 || c%5!=0)cout<<-1;
    else if(c%5==0) cout<<c/5;
}