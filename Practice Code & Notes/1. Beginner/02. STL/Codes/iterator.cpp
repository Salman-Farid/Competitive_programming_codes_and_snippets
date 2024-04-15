#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v{10, 20, 30, 40, 50};
    ///vector<int>::iterator it = v.begin();
    auto it = v.begin()+1;
    cout<<*it<<endl;


    it = find(v.begin(), v.end(), 35);
    int pos = it - v.begin();
    cout<<pos<<endl;


    v.erase(find(v.begin(), v.end(), 40));
    for(int x : v) cout<<x<<" ";
    cout<<endl;


    reverse(v.begin(), v.end());
    for(int x : v) cout<<x<<" ";
    cout<<endl;


    sort(v.begin(), v.end());
    for(int x : v) cout<<x<<" ";
    cout<<endl;


    int arr[] = {30, 10, 50, 60, 40};
    sort(arr, arr+5);
    for(int i = 0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}

