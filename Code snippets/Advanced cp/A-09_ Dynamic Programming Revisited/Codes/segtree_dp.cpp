#include <bits/stdc++.h>
using namespace std;

/*
given n points, choose maximum size subset of them such that for no 2 points (a, b), (c, d)
a >= c and b >= d (all x distinct, all y distinct)

ex:
4
1 1
5 2
2 5
6 6

ans : 2
*/


int main(){

    int n;
    cin>>n;


    vector<pair<int, int>> input(n);

    for(int i = 0; i<n; i++){
        cin>>input[i].first>>input[i].second;
    }

    vector<int> xsorted(n), ysorted(n);

    for(int i = 0; i<n; i++){
        xsorted[i] = ysorted[i] = i;
    }

    sort(xsorted.begin(), xsorted.end(), [&](int x, int y){return input[x].first < input[y].first;});
    sort(ysorted.begin(), ysorted.end(), [&](int x, int y){return input[x].second < input[y].second;});

    vector<int> ypos(n);
    for(int i = 0; i<n; i++){
        ypos[ysorted[i]] = i;
    }

    /// build segment tree for max query on -infinity

    for(int i = 0; i<n; i++){
        auto p = input[xsorted[i]];

        int val = /// query for max in (ypos[xsorted[i]]+1, n)

        val = max(val, 0);
        val++;

        /// update value of ypos[xsorted[i]] to be val
    }


    /// ans = max dp value in segment tree

    return 0;
}

