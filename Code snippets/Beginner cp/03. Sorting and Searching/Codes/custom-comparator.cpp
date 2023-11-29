#include <bits/stdc++.h>
using namespace std;

/// In the custom order, evens should be before odd and evens should be non-decreasing
/// while odds should be non-increasing


///   <
bool comp(int x, int y){
    if(x % 2 == 0 && y % 2 == 0)
        return (x < y);

    if(x % 2 == 1 && y % 2 == 1)
        return (x > y);


    return (x % 2) < (y % 2);
}

int main(){
    vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, -1, -2, -3};
    sort(v.begin(), v.end(), comp);

    for(int x : v){
        cout<<x<<" ";
    }
    cout<<endl;
}
