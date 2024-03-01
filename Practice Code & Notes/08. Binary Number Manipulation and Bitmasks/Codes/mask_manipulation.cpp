#include <bits/stdc++.h>
using namespace std;

#include "utils.cpp"

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int x = decimal("10101");

    /// what is the bit at index 2?

    int n = 2;          ///nth index
    int mask = (1<<n);

    if((x&mask) == 0)
        cout<<"bit is 0"<<endl;
    else
        cout<<"bit is 1"<<endl;


    /// change 1st bit to 1

    n = 1;
    mask = (1<<n);
    cout<<binary(x | mask)<<endl;



    /// change 2nd bit to 0
    n = 2;
    mask = ~(1<<n);
    cout<<binary(x&mask)<<endl;


    /// flip 2nd bit

    n = 1;
    mask = (1<<n);
    cout<<binary(x^mask)<<endl;

    return 0;
}


