// And be patient. Allah will not waste the reward of the virtuous.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, c = 0; cin >> n; int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    sort(arr, arr + n);
    for (int i = 1; i <n-1; i++)
    {
        if (arr[i] > arr[0] && arr[i] < arr[n-1])
        {
            c++;
        }
    }
    cout << c << endl;
}
