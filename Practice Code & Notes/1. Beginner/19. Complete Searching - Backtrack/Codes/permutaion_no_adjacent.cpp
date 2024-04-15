#include <bits/stdc++.h>
using namespace std;


int arr[100];
bool used[100];

void rec(int pos, int n){
    if(pos == n){
        for(int i= 0; i<n; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        return;
    }

    for(int i = 1; i<=n; i++){
        if(used[i]) continue;

        if(pos > 0 && arr[pos-1]+1 == i) continue;

        arr[pos] = i;
        used[i] = true;

        rec(pos+1, n); /// doing work

        used[i] = false;
    }
    arr[pos] = 0;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n = 6;

    rec(0, n);
}


