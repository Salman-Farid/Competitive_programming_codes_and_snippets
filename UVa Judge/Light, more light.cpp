// And be patient. Allah will not waste the reward of the virtuous.
// اللَّهُ أَكْبَرُ //And ˹surely˺ your Lord will give so much to you that you will be pleased.
#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n;
    while (true) {
        cin >> n;
        if (n == 0) break;
        long long sqrt_n = sqrt(n);
        if (sqrt_n * sqrt_n == n) cout << "yes" << endl;
        else cout << "no" << endl;
    }
}