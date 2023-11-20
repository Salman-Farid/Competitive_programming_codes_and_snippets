#include <bits/stdc++.h>
using namespace std;
int main()
{
    char c; cin >> c; string s; cin >> s;
    string s1 = "qwertyuiopasdfghjkl;zxcvbnm,./", s2;
    for (int i = 0; i < s.size(); i++)
    {
        int index = s1.find(s[i]);
        if (c=='R') s2+=s1[index-1];
        else  s2+=s1[index+1];
    }
    cout << s2 << endl;
}