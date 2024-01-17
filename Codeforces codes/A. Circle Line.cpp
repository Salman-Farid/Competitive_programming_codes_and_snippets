// And be patient. Allah will not waste the reward of the virtuous.
// اللَّهُ أَكْبَرُ //And ˹surely˺ your Lord will give so much to you that you will be pleased.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, p = 0,b=0; cin >> n; int arr[n];
    for (auto &a : arr){
        cin >> a;
        b+=a;
    } 
    int t, y; cin >> t >> y;
    for (int i = (min(t, y)-1); i <(max(t,y)-1); i++) p+=arr[i];
    cout<<min(p,b-p);
}