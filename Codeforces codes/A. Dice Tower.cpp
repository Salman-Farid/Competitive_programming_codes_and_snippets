// And be patient. Allah will not waste the reward of the virtuous.
// اللَّهُ أَكْبَرُ //And ˹surely˺ your Lord will give so much to you that you will be pleased.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, t; cin >> n >> t;
    for (int i = 0; i < n; i++)
    {
        int a,b;
        cin >> a >> b ;
        if(a==t || a== 7-t || b==t || b==7-t){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
}
