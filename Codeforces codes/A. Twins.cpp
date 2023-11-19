#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, sum = 0, k = 0, w;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    sum = sum / 2;
    sort(arr, arr + n);
    w = n;
    for (int j = n - 1; j >= 0; j--)
    {
        w--;
        k +=arr[j];
        if (k > sum) break;
    }
    cout << n - w << endl;
}