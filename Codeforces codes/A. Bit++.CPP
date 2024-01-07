// And be patient. Allah will not waste the reward of the virtuous.
// اللَّهُ أَكْبَرُ //And ˹surely˺ your Lord will give so much to you that you will be pleased.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,x=0; string s;
    cin >> n;
    while (n--)
    {
        cin >>s;
        if(s == "++X" ||s == "X++" ) x+=1;
        else x-=1;
    }
    cout << x ;
}