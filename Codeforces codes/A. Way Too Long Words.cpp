#include <iostream>
using namespace std;

int main()
{
    int n;
    string s;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        int p = s.length();
        if (p <= 10) cout << s << endl;
        else cout << s[0] << p - 2 << s[p - 1] << endl;
    }
}
