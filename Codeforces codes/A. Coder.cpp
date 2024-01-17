// And be patient. Allah will not waste the reward of the virtuous.
// اللَّهُ أَكْبَرُ //And ˹surely˺ your Lord will give so much to you that you will be pleased.
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; cin >> n;
    cout << ((n*n)+1)/2 << endl;
    for(int i = 0; i < n; i ++){
        for(int j = i; j < n+i; j ++){
            if(j%2==0){cout << 'C';}
            else cout << '.';
        }
        cout << endl;
    }
}


//Option: 2
// And be patient. Allah will not waste the reward of the virtuous.
// اللَّهُ أَكْبَرُ //And ˹surely˺ your Lord will give so much to you that you will be pleased.
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     cout << ((n * n) + 1) / 2 << endl;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if (i % 2 == 0)
//             {
//                 if (j % 2 == 0) cout << 'C';
//                 else cout << '.';
//             }
//             else 
//             {
//                 if (j % 2 == 0) cout << '.';
//                 else cout << 'C';
//             }
//         }
//         cout << endl;
//     }
// }