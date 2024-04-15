#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin>>n;
    vector<int> input(n);

    for(int i = 0; i<n; i++){
        cin>>input[i];
    }

    vector<int> stk;

    for(int i = 0; i<n; i++){
        while(stk.size() != 0 && input[stk.back()] >= input[i]){
            stk.pop_back();
        }

        if(stk.size() == 0)
            cout<<0<<" ";
        else
            cout<<1+stk.back()<<" ";

        stk.push_back(i);
    }

    return 0;
}

