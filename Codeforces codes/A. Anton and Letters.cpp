#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    getline(cin, str);
    int count = 0;

    for (int i = str.size() - 1; i >= 0; i--)
    {
        for (int j = str.size(); j >= 0; j--)
        {

            if (str[i] == '{' or str[i] == '}' or str[i] == ',' or str[i] == ' ')
            {
                str.erase(i, 1);
            }
            else if (str[i] == str[j] and i != j)
            {
                str.erase(i, 1);
            }
        }
    }
    cout << str.length() << endl;

    return 0;
}

#other's solution:
.......................................................................................................
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    set<char> nums;
    getline(cin,s);
    for (int i = 0; i < s.size(); i ++){
        if (s[i] != ' ' && s[i] != ',' && s[i] != '{' && s[i] != '}'){
           nums.insert(s[i]);
        }
    }
    cout << nums.size();
    return 0;
}