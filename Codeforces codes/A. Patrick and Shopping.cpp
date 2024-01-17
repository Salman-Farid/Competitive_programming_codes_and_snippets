// And be patient. Allah will not waste the reward of the virtuous.
// اللَّهُ أَكْبَرُ //And ˹surely˺ your Lord will give so much to you that you will be pleased.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,l,m, p = 0,b=0,e=0,z=0; cin >> n>>l>>m;
    p=((n*2)+(l*2));
    e=((m*2)+(l*2));
    z=((m*2)+(n*2));
    b = (n+m+l);
    cout<<min({p,b,z,e})<<endl;
}

//Option : 2
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     long long int a,b,c;
//     cin>>a>>b>>c;
//     cout<<min(a,b+c)+min(b,a+c)+min(c,a+b)<<endl;
// }