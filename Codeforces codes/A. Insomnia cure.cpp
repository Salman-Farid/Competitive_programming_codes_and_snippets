// And be patient. Allah will not waste the reward of the virtuous.
// اللَّهُ أَكْبَرُ //And ˹surely˺ your Lord will give so much to you that you will be pleased.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int k,l,m,n,d,c=0; cin >> k>>l>>m>>n>>d;
    for(int i=1;i<=d; i++) if(i%k==0 || i%l==0 || i%m==0 || i%n==0) c++;
    cout<<c<<endl;
}