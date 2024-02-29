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
        vector<int> input(n);

        for(int i = 0; i<n; i++){
            cin>>input[i];
        }




        vector<long long int> group(32);

        for(int i = 0; i<n; i++){
            for(int b = 31; b >= 0; b--){
                int mask = (1<<b);
                if((input[i]&mask) == 0){
                    continue;
                }
                else{
                    group[b]++;
                    break;
                }
            }
        }

        long long int ans = 0;
        for(int i = 0; i<32; i++){
            ans += group[i]*(group[i]-1)/2;
        }

        cout<<ans<<"\n";

    }
}
