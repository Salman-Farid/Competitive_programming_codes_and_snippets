#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, m;
    cin>>n>>m;

    map<int, int> tickets;          ///tickets[t] = count of t

    for(int i = 0; i<n; i++){
        int t;
        cin>>t;
        tickets[t]++;
    }

//    for(auto p : tickets){
//        cout<<p.first<<" = "<<p.second<<endl;
//    }

    for(int i = 0; i<m; i++){
        int price;
        cin>>price;

        auto it = tickets.upper_bound(price);   ///find the ticket value customer will pay
        if(it == tickets.begin()){      /// no such ticket exists
            cout<<-1<<"\n";
            continue;
        }
        it--;

        cout<<(*it).first<<"\n";
        (*it).second--;         /// decrease count of the ticket

        if((*it).second == 0){  /// if count is 0, we can't keep that ticket, erase it
            tickets.erase(it);
        }
    }

//    for(auto p : tickets){
//        cout<<p.first<<" = "<<p.second<<endl;
//    }

}
