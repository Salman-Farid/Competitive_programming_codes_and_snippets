#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int tc;
    cin>>tc;
    for(int cs = 1; cs <= tc;cs++){
        int n;
        cin>>n;

        cout<<n<<" ";
        for(int i = 1; i<=n-1; i++){
            cout<<i<<" ";
        }
        cout<<"\n";
    }

    return 0;
}
