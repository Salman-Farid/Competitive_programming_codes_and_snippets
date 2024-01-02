// And be patient. Allah will not waste the reward of the virtuous.

//option : 1

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    set<char> a, b;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            char c ;
            cin >> c;
            if ((i == j) || j == n - i - 1) a.insert(c);
            else b.insert(c);
        }
    }
    if (a!=b && a.size()==1 && b.size()==1) cout<< "YES"<< endl;
    else cout<< "NO"<< endl;
}


//option : 2
// And be patient. Allah will not waste the reward of the virtuous.
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n, a = 0, b = 0;
//     cin >> n;
//     char x, y;
//     char arr[n][n];
//     for (int i = 0; i < n; i++)
//         for (int j = 0; j < n; j++)
//         {
//             cin >> arr[i][j];
//             x= arr[0][0];
//             if (((i == j)|| (i + j) == n - 1) && arr[i][j] == x)
//             {
//                 a++;
//             }
//             if (i > 0 || j > 0)
//             {
//                 y=arr[0][1];
//                 if(x!=y && arr[i][j]==y ) b++;
//             }
//         }
    
//     if (a == (n*2-1) && b == n*n-(n*2-1)) cout << "YES" << endl;
//     else cout << "NO" << endl;
// }