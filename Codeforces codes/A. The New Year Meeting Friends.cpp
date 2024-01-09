// And be patient. Allah will not waste the reward of the virtuous.
// اللَّهُ أَكْبَرُ //And ˹surely˺ your Lord will give so much to you that you will be pleased.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[3],c=0;
    for (int i = 0; i < 3; i++) cin >> arr[i];
    sort(arr, arr + 3);
    for (int j = 0; j < 2; j++) c+= (arr[j+1] - arr[j]);
    cout<<c;
}