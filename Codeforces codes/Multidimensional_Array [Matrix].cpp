// And be patient. Allah will not waste the reward of the virtuous.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r, c; cin >> r >> c; int arr[r][c]; 
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++) cin>> arr[i][j];
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++){
            cout<<arr[i][j]<<" ";
        } 
        cout<<endl;
    }
}

            