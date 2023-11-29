#include <bits/stdc++.h>
using namespace std;


bool yes[1000];
void rec(int pos, int n){
    if(pos == n){
        for(int i = 0; i<n; i++){
            if(yes[i])
                cout<<i<<" ";
        }
        cout<<endl;
        return;
    }

    rec(pos+1, n);

    yes[pos] = true;
    rec(pos+1, n);
    yes[pos] = false;

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n = 4;

    rec(0, n);
}
