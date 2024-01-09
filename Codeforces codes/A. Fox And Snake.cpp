// And be patient. Allah will not waste the reward of the virtuous.
// اللَّهُ أَكْبَرُ //And ˹surely˺ your Lord will give so much to you that you will be pleased.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, y = 3; bool t = false; cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (i % 2 != 0) cout << "#";
            else if (i % 4 == 0 && (j == 1)) cout << "#";
            else 
            {
               if(j==m && (i%4)!=0) cout<<"#";
               else cout<<".";
            }
        }
        cout<<endl;
    }
}

// Option: 2
// And be patient. Allah will not waste the reward of the virtuous.
// اللَّهُ أَكْبَرُ //And ˹surely˺ your Lord will give so much to you that you will be pleased.
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n, m, y = 3; bool t = false; cin >> n >> m;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             if (i % 2 == 0) cout << "#";
//             else
//             {
//                 if (i == y)
//                 {
//                     y += 4;
//                     t = true;
//                     if (j < 1) cout << "#";
//                 }

//                 else
//                 {
//                     if (j < m - 1) cout << ".";
//                     else cout << (t ? "." : "#");
//                 }
//             }
//         }
//         cout << endl;
//         t = false;
//     }
// }