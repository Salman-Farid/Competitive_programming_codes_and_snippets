#include <iostream>
#include <string>
using namespace std;
int main()
{
    int  k;
    string s, p, w, q;
    cin >> s >> p;
    for (auto i : s)
    {
        i = tolower(i);
        w += i;
    }
    for (auto j : p)
    {
        j = tolower(j);
        q += j;
    }
    if (w>q)
        cout<<"1";
    else if(w<q)
        cout<<"-1";
    else
        cout<<"0";
}