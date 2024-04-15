#include <bits/stdc++.h>
using namespace std;

#include "utils.cpp"

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int x = decimal("11000100");

    cout<<binary(x)<<endl;


    /// O(1)
    cout<<__builtin_popcount(x)<<endl;      /// count of 1's
    cout<<__builtin_clz(x)<<endl;           /// leading 0 count
    cout<<__builtin_ctz(x)<<endl;           /// trailing 0 count


    /// long long
    cout<<__builtin_popcountll(x)<<endl;      /// count of 1's
    cout<<__builtin_clzll(x)<<endl;           /// leading 0 count
    cout<<__builtin_ctzll(x)<<endl;           /// trailing 0 count



    return 0;
}

