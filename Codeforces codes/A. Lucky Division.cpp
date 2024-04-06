// And be patient. Allah will not waste the reward of the virtuous. 
// اللَّهُ أَكْبَرُ //And ˹surely˺ your Lord will give so much to you that you will be pleased.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={4,7,44,77,47,74,447,477,474,744,777,747,774,444};
    int n; cin >>n;
    for(auto i : arr){
        if(n%i==0){
            cout<<"YES";
            return 0;
        } 
        
    }
    cout<<"NO";
}