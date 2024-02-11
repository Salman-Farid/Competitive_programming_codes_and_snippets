// And be patient. Allah will not waste the reward of the virtuous.
// اللَّهُ أَكْبَرُ //And ˹surely˺ your Lord will give so much to you that you will be pleased.

#include <iostream>
using namespace std;
int main()
{
    long long int n, x, d, left=0; char c; cin >> n >> x;
    while (n--)
    {
        cin >> c >> d;
        if(c=='+') x+=d;
        else if (x>=d) x-=d;
        else left++;
    }
    cout<<x<<" "<<left<<endl;
}