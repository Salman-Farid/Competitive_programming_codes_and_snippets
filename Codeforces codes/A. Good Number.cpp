// And be patient. Allah will not waste the reward of the virtuous.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, k, c = 0; cin >> n >> k; string arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        for (int j = 0; j <= k; j++)
        {
            if (arr[i].find(to_string(j)) == -1)
            {
                c++;
                break;
            }
        }
    }
    cout << n - c;
}
