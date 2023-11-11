// And be patient. Allah will not waste the reward of the virtuous.
#include <iostream>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
        cout << char('a' + (i % k));
}