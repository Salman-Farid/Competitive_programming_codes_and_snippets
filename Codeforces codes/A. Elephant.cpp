// And be patient. Allah will not waste the reward of the virtuous.
// اللَّهُ أَكْبَرُ //And ˹surely˺ your Lord will give so much to you that you will be pleased.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, p; cin >> n;
    if (n > 5)
    {
        int m = n / 5;
        if(n%5!=0 )cout<<m+1;
        else cout<<m;
        return 0;
    }
    cout<<1;

}
// Option:2 
// #include <bits/stdc++.h>
// using namespace std;
// int main ()
// {
//     double x,n;
//     cin>>x;
//     n=ceil(x/5);
//     cout<<n;
//    return 0;
// }
