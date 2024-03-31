// And be patient. Allah will not waste the reward of the virtuous.
// اللَّهُ أَكْبَرُ //And ˹surely˺ your Lord will give so much to you that you will be pleased.
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n; cin >> n;
    if (n == 1 || n == 2) {
        cout << 1 << endl<<1<<endl;
    } else if (n == 3) {
        cout << 2 << endl<< 1 << " " << 3 << endl;;
    }  else {
        cout << n << endl;
        for (int i = n-1; i >= 1; i -= 2) cout << i << " ";
        for (int i = n; i >= 1; i -= 2)cout << i << " ";
    }
}