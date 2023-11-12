//problem: https://www.codechef.com/problems/SNACKUP

// And be patient. Allah will not waste the reward of the virtuous.
#include <iostream>
using namespace std;
int main()
{

    int t, n;
    cin >> t;
    while (t--)
    {

        int n ; cin >> n;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << j+1<<" " << (i + j) % n+1 << " " << (i + j + 1) % n+1 << endl;
            }
            cout << endl;
        }
    }
}
