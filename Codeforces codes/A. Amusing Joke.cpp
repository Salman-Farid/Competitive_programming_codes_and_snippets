// And be patient. Allah will not waste the reward of the virtuous.
// اللَّهُ أَكْبَرُ //And ˹surely˺ your Lord will give so much to you that you will be pleased.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, p ,d, q;cin>>s>>p>>d; q= s+p;
    if (q.size() != d.size()) return(cout<<"NO",0);
    for(auto c: q){
        int f = d.find(c);
        if(f==-1) return(cout<<"NO",0);
        else d.erase(f,1);
    }
    cout<<"YES"<<endl;
}
//........................................................
//Option: 2
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1, s2, s3; cin >> s1 >> s2 >> s3; string h = s1 + s2;
    sort(h.begin(), h.end()); sort(s3.begin(), s3.end());
    ((h == s3)? cout << "YES":cout <<"NO");
}