// And be patient. Allah will not waste the reward of the virtuous.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0; cin >> n; string s, key;
    map<string, int> m;
    while(n--)
    {
        cin >> s;
        m[s]++;
        if(m[s]>c){
            c = m[s]; 
            key = s;
        } 
    }
    cout << key;
}




//Option : 2-->
// And be patient. Allah will not waste the reward of the virtuous.
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     map<string, int> m;
//     for (int i = 0; i < n; i++)
//     {
//         string s;
//         cin >> s;
//         m[s]++;
//     }
//     if (!m.empty())
//     {
//         string maxKey = m.begin()->first;
//         int maxCount = m.begin()->second;

//         for (auto p : m)
//         {
//             if (p.second > maxCount)
//             {
//                 maxKey = p.first;
//                 maxCount = p.second;
//             }
//         }
//         cout << maxKey << endl;
//     }
// }