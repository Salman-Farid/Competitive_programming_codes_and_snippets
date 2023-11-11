#include <iostream>
using namespace std;

int main()
{
    int n, t, k, d, exact_time= 0;cin >> n >> t >> k >> d;
    while (exact_time <= d)
    {
        n -= k;
        exact_time += t;
    }
    if (n > 0) cout << ("YES\n");
    else cout << ("NO\n");
}
