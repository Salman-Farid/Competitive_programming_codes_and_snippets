// And be patient. Allah will not waste the reward of the virtuous.
// اللَّهُ أَكْبَرُ //And ˹surely˺ your Lord will give so much to you that you will be pleased.
// And be patient. Allah will not waste the reward of the virtuous.
// اللَّهُ أَكْبَرُ //And ˹surely˺ your Lord will give so much to you that you will be pleased.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,l,p,y ; cin >>n;
    l= n%7; p = n/7;y = p*2;
    int x = ceil(p * 2) + min(l, 2);
    if(n>=7 && l!=6) cout<< y<<" "<<x;
    else if(n<=2)cout<<0<<" "<<n;
    else if(n==6 or l==6) cout<<y+1<<" "<<x;
    else cout<<0<<" "<<2;
}