#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int tc;
    cin>>tc;

    for(int cs = 1; cs <= tc; cs++){
        int n;
        cin>>n;
        vector<int> v(n);

        for(int i = 0; i<n; i++){
            cin>>v[i];
        }


        bool flag = true;

        for(int i = 0; i<n-1; i++){
            if(v[i] > v[i+1])
                ;
            else
                flag = false;
        }


        if(flag == true){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }
    }
}
