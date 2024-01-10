// And be patient. Allah will not waste the reward of the virtuous.
// اللَّهُ أَكْبَرُ //And ˹surely˺ your Lord will give so much to you that you will be pleased.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n ,k=1,m=0; cin >>n;
    int mid = (n-1)/2;
    string star="",d="";
    for(int i=0;i<n;i++){
        star =string ((n-k)/2,'*');
        d =string(k,'D');
        if(i<mid) k= k+2;
        else k=k-2;
        cout << star <<d << star<<endl ;
    }

}