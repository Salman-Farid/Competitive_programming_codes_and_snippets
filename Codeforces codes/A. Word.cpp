#include <iostream>
#include <string>
#include <cstring>
#include <cctype>
using namespace std;
int main()
{
    int i, upper_count = 0, lower_count = 0;
    string st, upper, lower;
    cin >> st;
    char uc, lw;
    for (char p : st)
    {
        if (p >= 'A' && p <= 'Z')
        {
            upper_count++;
        }
        else if (p >= 'a' && p <= 'z')
        {
            lower_count++;
        }
    }
    for (char o : st)
    {
        if (upper_count > lower_count)
        {
            uc = std::toupper(o);
            cout << uc;
        }
        else if (lower_count >= upper_count)
        {
            lw = std::tolower(o);
            cout << lw;
        }
    }
}

......................................................................................................................................................................................................................................
***2nd solution(recomended):
......................................................................................................................................................................................................................................
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int upper_count = 0, lower_count = 0;
    string st;
    cin >> st;
    for (auto p : st)
    {
        if (p >= 'A' & p <= 'Z')
        {
            upper_count++;
        }
        else if (p >= 'a' & p <= 'z')
        {
            lower_count++;
        }
    }
    for (auto p : st)
    {

        if (upper_count > lower_count)
        {
            p = toupper(p);
            cout << p;
        }
        else if (lower_count >= upper_count)
        {
            p = tolower(p);
            cout << p;
        }
    }
}
