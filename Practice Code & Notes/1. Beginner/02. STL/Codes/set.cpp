#include<bits/stdc++.h>
using namespace std;

int main(){

    set<int> s;
    s.insert(10);
    s.insert(40);
    s.insert(20);
    s.insert(30);
    s.insert(10);
    cout<<s.size()<<endl;


    for(int x : s){
        cout<<x<<" ";
    }
    cout<<endl;


    if(s.find(50) == s.end()) cout<<"50 is not found"<<endl;
    else cout<<"50 is found"<<endl;


    cout<<*s.begin()<<endl;
    cout<<*(--s.end())<<endl;


    cout<<s.count(10)<<endl;
    cout<<s.count(50)<<endl;

    return 0;
}
