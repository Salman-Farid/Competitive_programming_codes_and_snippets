#include<bits/stdc++.h>
using namespace std;
 
int main(){
    string str;
    cin>>str;
    sort(str.begin(),str.end());
    int d = 0;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]!=str[i+1])
        d++;
    }
    if(d%2==0)
    cout<<"CHAT WITH HER!";
    else
    cout<<"IGNORE HIM!";
    return 0;
}