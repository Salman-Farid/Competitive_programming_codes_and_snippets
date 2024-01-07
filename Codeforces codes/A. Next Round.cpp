// And be patient. Allah will not waste the reward of the virtuous.
// اللَّهُ أَكْبَرُ
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, c = 0,b=0;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if(arr[i]==0) b++;
    }

    for (int j = 0; j < n; j++)
    {
        if (arr[j] >= arr[k-1])
        {
            c += 1;
        }
    }
     if (arr[k-1]==0) cout << c-b;
     else cout<< c;
}

//Option 2:
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n, k, c = 0,b=0;
//     cin >> n >> k;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     for (int j = 0; j < n; j++)
//     {
//         if (arr[j]>0 && arr[j] >= arr[k-1])
//         {
//             c += 1;
//         }
//     }
//     cout<< c;
// }