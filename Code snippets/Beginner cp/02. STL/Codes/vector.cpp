#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> v;
    cout<<"size " <<v.size()<<endl;
    v.push_back(10);
    cout<<"size " <<v.size()<<endl;
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    cout<<"size " <<v.size()<<endl;


    cout<<v[0]<<" "<<v[1]<<" "<<v[2]<<endl;


    v.pop_back();
    cout<<"size " <<v.size()<<endl;


    for(int i = 0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;


    vector<int> w(5);
    for(int x : w){
        cout<<x<<" ";
    }
    cout<<endl;


    vector<int> z{2, 3, 4};
    for(int x : z)
        cout<<x<<" ";
    cout<<endl;


    vector<string> vst;
    vst.push_back("hello");
    vst.push_back("world");


    for(string s : vst){
        cout<<s<<" ";
    }
    cout<<endl;

    return 0;
}
