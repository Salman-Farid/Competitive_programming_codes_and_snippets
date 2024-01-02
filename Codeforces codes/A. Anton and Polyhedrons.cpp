// And be patient. Allah will not waste the reward of the virtuous.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,c =0; cin >> n; string  arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == "Tetrahedron") c+= 4;
        else if (arr[i] == "Cube") c+= 6;
        else if (arr[i] == "Octahedron") c+= 8;
        else if (arr[i] == "Dodecahedron") c+= 12;
        else  c+= 20;
    }
    cout<< c<< endl;
}