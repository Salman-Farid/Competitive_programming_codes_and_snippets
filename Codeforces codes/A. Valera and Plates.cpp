// And be patient. Allah will not waste the reward of the virtuous.
// اللَّهُ أَكْبَرُ //And ˹surely˺ your Lord will give so much to you that you will be pleased.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n , m , k, y; cin >> n >> m >> k;
    for(int i=0; i<n; i++){
        cin >> y;
        if(y==1)m--;
        else if(y==2 && k==0) m--;
        else k--;
    }
    if(k<=0 && m<=0) cout<< abs(m)+abs(k);
    else if(m<=0) cout<< abs(m);
    else cout<<0;
}
//..............................................................

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n,m,k,o, c(0); cin>>n>>m>>k;
//     for(int i=0;i<n;i++){
//         cin >>o;
//         if(o==2 && k>0) k--;
//         else if(o==2 && m>0)m--;
//         else if(o==1 && m>0)m--;
//         else c++;
//     }
//     cout<<c<<endl;
// }
