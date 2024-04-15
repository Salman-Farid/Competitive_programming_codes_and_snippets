#include <bits/stdc++.h>
using namespace std;

int safeMod(int x, int mod){
    int y = x % mod;
    if(y < 0)
        y += mod;
    return y;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int mod = 81;   /// odd


    int sum = 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8;


    ///  1 + 2 + ... + n = n * (n+1) / 2

    cout<<sum % mod <<endl;



    sum = 8 * (8 + 1);
    sum %= mod;

//    cout<<"n * (n+1) : "<<sum<<endl;

/// 31 / 2 = 36 (mod 41)

/// 2 * 36 = 31 (mod 41)

    sum *= (mod+1)/2;

    sum % = mod;

    cout<<sum<<endl;


    return 0;
}
