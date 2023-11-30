// And be patient. Allah will not waste the reward of the virtuous.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r, c; 
    cin >> r >> c;
    char arr[r][c]; 
    string p="#Black&White";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin>> arr[i][j];
            if (arr[i][j]== 'C' || arr[i][j]== 'M' || arr[i][j]== 'Y') 
            {
                p = "#Color";
            }
        }
    }
    cout << p << endl;
}