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

        vector<int> input(n);
        vector<int> cnt(n+1);


        for(int i = 0; i<n; i++){
            cin>>input[i];
            cnt[input[i]]++;
        }

        int winningBid = -1;

        for(int i = 1; i<= n; i++){
            if(cnt[i] == 1){
                winningBid = i;
                break;
            }
        }

        if(winningBid == -1){
            cout<<-1<<"\n";
        }
        else{
            for(int i = 0; i<n; i++){
                if(input[i] == winningBid){
                    cout<<i+1<<"\n";
                    break;
                }
            }
        }



    }

    return 0;
}

