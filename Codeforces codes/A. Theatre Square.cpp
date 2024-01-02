//Option 1:
// And be patient. Allah will not waste the reward of the virtuous.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, m, a;
    cin >> n >> m >> a;
    long long int height = n / a;
    long long int width = m / a;
    if (n % a > 0) height++;
    if (m % a > 0) width++;
    cout << height * width << endl;
}

//Option 2:
// And be patient. Allah will not waste the reward of the virtuous.
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//   long long n, m, a; cin >> n >> m >> a;
//   cout << ((n + a - 1) / a) * ((m + a - 1) / a) << '\n';
// }