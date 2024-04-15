#include <bits/stdc++.h>
using namespace std;


int cnt[3] = {1, 1, 2};
int taken[3];

void rec(int pos, int n){
    if(pos == n){
        for(int item = 0; item<n; item++){
            for(int i= 0; i<taken[item]; i++)
                cout<<item<<" ";
        }
        cout<<endl;
        return;
    }

    for(int c = 0; c <= cnt[pos]; c++){
        taken[pos] = c;
        rec(pos+1, n);
        taken[pos] = 0;
    }
}



int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n = 3;

    rec(0, n);
}

