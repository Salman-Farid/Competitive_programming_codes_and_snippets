//Option : 1
// And be patient. Allah will not waste the reward of the virtuous.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long l, r;
    cin >> l >> r;
    if (l % 2 != 0) l++;
    if (l + 2 > r) cout << -1 << endl;
    else cout << l << " " << l + 1 << " " << l + 2 << endl;
}

//Option 2:
// #include <bits/stdc++.h>
// #include <iostream>
// using namespace std;
// int main() {
//     long long l, r; cin >> l >> r;
//     for (long long a = l; a <= r - 2; ++a) {
//         for (long long b = a + 1; b <= r - 1; ++b) {
//             long long c = b + 1;
//             if (__gcd(a, b) == 1 && __gcd(b, c) == 1) {
//                 if (__gcd(a, c) != 1) cout << a << " " << b << " " << c << endl;
//             }
//         }
//     }
//     cout << -1 << endl;
// }
