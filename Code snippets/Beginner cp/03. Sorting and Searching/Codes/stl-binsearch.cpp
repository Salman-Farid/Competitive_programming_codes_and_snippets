#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<int> v{10, 10, 30, 30, 30, 40, 40, 40, 50};



    cout<<"binary search:"<<endl;

    bool found = binary_search(v.begin(), v.end(), 30);
    cout<<((found)? "found" : "not found")<<endl;

    found = binary_search(v.begin(), v.end(), 35);
    cout<<((found)? "found" : "not found")<<endl;





    cout<<"lower_bound:"<<endl;

    auto it = lower_bound(v.begin(), v.end(), 30);
    cout<<(it-v.begin())<<endl;

    it = lower_bound(v.begin(), v.end(), 35);
    cout<<(it-v.begin())<<endl;






    cout<<"upper_bound:"<<endl;

    it = upper_bound(v.begin(), v.end(), 30);
    cout<<(it-v.begin())<<endl;

    it = upper_bound(v.begin(), v.end(), 35);
    cout<<(it-v.begin())<<endl;
}
