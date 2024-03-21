// And be patient. Allah will not waste the reward of the virtuous.
// اللَّهُ أَكْبَرُ //And ˹surely˺ your Lord will give so much to you that you will be pleased.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s,p ="hello"; cin>>s;int i =0;
    for(auto a:s) if(a==p[i]) i++;
    (i==p.size()?cout<<"YES":cout<<"NO");
}

//Option: 2
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string a,d = "hello"; cin>>a; queue<char>q;
//     for(auto w: d) q.push(w);
//     for(int i=0;i<a.size();i++) if(a[i]==q.front()) q.pop();
//     (q.empty()? cout<<"YES" :cout<<"NO");
// }
 	 		   	   	 	 				  			     	