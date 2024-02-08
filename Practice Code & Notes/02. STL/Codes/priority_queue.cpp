#include<bits/stdc++.h>
using namespace std;

int main(){

    priority_queue<int> pq;
    pq.push(10);
    pq.push(20);
    pq.push(40);
    pq.push(30);
    pq.push(100);
    pq.push(0);
    pq.push(10);
    cout<<"size "<<pq.size()<<endl;


    while(pq.size() != 0){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;

    return 0;
}
