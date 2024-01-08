// And be patient. Allah will not waste the reward of the virtuous.
// اللَّهُ أَكْبَرُ //And ˹surely˺ your Lord will give so much to you that you will be pleased.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s; cin >> s;
    for (char c : s)
    {
        char q = tolower(c);
        if (q != 'a' && q != 'o' && q != 'y' && q != 'e' && q != 'u' && q!= 'i')
        {
            cout<<"."<<c;
        }
        
    }
    
}

//Option : 2

// And be patient. Allah will not waste the reward of the virtuous.
// اللَّهُ أَكْبَرُ //And ˹surely˺ your Lord will give so much to you that you will be pleased.
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s,l; cin >> s;
//     for (char c : s)
//     {
//         char q = tolower(c);
//         if (q != 'a' && q != 'o' && q != 'y' && q != 'e' && q != 'u' && q!= 'i')
//         {
//             l+='.';
//             l+=q;
//         }
//     }
//     cout<<l;
// }