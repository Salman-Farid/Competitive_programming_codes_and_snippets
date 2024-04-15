#include <bits/stdc++.h>
using namespace std;

#include "utils.cpp"

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n = 5;

    /// n = 22/23/24
    /// n <= 20

    /// overall -> O(2^n * n)

    /// O(2^n)
    for(int mask = 0; mask <= (1<<n)-1; mask++){    /// mask = some encoded subset

        ///O(n)
        for(int i = 0; i<n; i++){
            /// check if i-th index of mask is 1 or 0
            if((mask & (1<<i)) == 0){
                ;///bit was 0
            }
            else{
                cout<<i;///bit was 1
            }
        }
        cout<<endl;

    }

    return 0;
}


/*
012
01
12
02
0
1
2

*/
