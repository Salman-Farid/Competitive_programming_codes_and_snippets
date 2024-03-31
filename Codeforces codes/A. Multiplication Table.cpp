// And be patient. Allah will not waste the reward of the virtuous.
// اللَّهُ أَكْبَرُ //And ˹surely˺ your Lord will give so much to you that you will be pleased.
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, x; cin >> n >> x; int c = 0;
    for (int i = 1; i <= n; i++) if (x % i == 0 && x / i <= n)c++; 
    cout <<c;
}