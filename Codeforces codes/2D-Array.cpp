// And be patient. Allah will not waste the reward of the virtuous.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,p;cin>> n>>p; int arr[n][p];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < p; j++) cin >> arr[i][j];
    }
    cout<< "Displaying the 2D array: "<<endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < p; j++){
            cout << arr[i][j]<<"  ";
        }
        cout << endl;
    }
}