// And be patient. Allah will not waste the reward of the virtuous. 
// اللَّهُ أَكْبَرُ //And ˹surely˺ your Lord will give so much to you that you will be pleased.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,z,a,b,c; cin>>x>>y>>z;
    a= sqrt((x*y)/z); b= sqrt((y*z)/x); c= sqrt((z*x)/y);cout<<(a+b+c)*4;
}