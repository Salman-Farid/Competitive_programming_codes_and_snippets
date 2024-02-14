// And be patient. Allah will not waste the reward of the virtuous.
// اللَّهُ أَكْبَرُ //And ˹surely˺ your Lord will give so much to you that you will be pleased.
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,l,r;
    cin >> n; int left = 0, right = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> l >> r;
        left += l; right += r;
    }
    left = min(left, n - left); right = min(right, n - right);
    cout << left + right << endl;
}

// ...................................................................................
// Option 2: 
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, l = 0, r = 0, e = 0, p = 0, w,q,i,k;cin >> n; int h =n;
    while (n--)
    {
        cin >> i >> k; ((i==1)?l++:r++); ((k == 1)? e++:p++); 
    }
    ((r==0 || l ==0 )? w=h:w= max(l,r));
    ((e==0 || p ==0 )? q=h:q= max(e,p));
    cout<< (h-w)+(h-q)<<endl;
}
