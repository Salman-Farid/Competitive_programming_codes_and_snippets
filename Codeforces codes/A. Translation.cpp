// And be patient. Allah will not waste the reward of the virtuous.
// اللَّهُ أَكْبَرُ //And ˹surely˺ your Lord will give so much to you that you will be pleased.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s , t;
    cin >> s >> t;
    reverse(t.begin(),t.end());
    cout<< (t==s ? "YES":"NO");
}


//Option: 2
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s, t; cin >> s >> t; int j=s.size()-1;
//     {
//         for (int i = 0; i < s.size(); i++)
//         {
//             if (t[i] != s[j])
//             {
//                 cout << "NO";
//                 return 0;
//             }
//             j--;
//         }
//     }
//     cout << "YES";
// }


//Option: 3
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s, t; cin >> s >> t;
//     {
//         for (int i = 0, j=s.size()-1; i < s.size(); i++,j--)
//         {
//             if (t[i] != s[j])
//             {
//                 cout << "NO";
//                 return 0;
//             }
//         }
//     }
//     cout << "YES";
// }