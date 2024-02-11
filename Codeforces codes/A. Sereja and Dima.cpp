// And be patient. Allah will not waste the reward of the virtuous.
// اللَّهُ أَكْبَرُ //And ˹surely˺ your Lord will give so much to you that you will be pleased.
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; cin >> n; int c[n];
    for (int i = 0; i < n; ++i) cin >> c[i];
    int sp = 0, dp = 0;
    for (int l = 0, r = n - 1; l <= r;) {
        if (c[l] > c[r]) sp += c[l++];
        else sp += c[r--];
        if (l <= r) {
            if (c[l] > c[r]) dp += c[l++];
            else dp += c[r--];
        }
    }
    cout << sp << " " << dp << endl;
}

// Option 2:
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n; cin>> n; int a[n],s= 0, e= n-1, sereja= 0, dima= 0;
    for(int i=0; i< n ; i++) cin>> a[i];
    for(int i = 1 ; i<=n ; i++){
        if(s<=e){
            if(i%2!=0){
                int mx = max(a[s], a[e]);
                sereja= sereja + mx;
                if(mx == a[s]) s++;
                else e--;
            }   
            else{
                int mx = max(a[s], a[e]);
                dima = dima + mx;
                if(mx == a[s]) s++;
                else e--;
            }
        }
    }
    cout<< sereja << " "<< dima;
}

//----------------------------------------------------------------
//Option 3:
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n; cin >> n; vector<int> a(n);
    for(int i = 0; i < n; i++)  cin >> a[i];
    int sereja = 0, dima = 0; int left = 0, right = n - 1; bool serejasTurn = true;
    while(left <= right) {
        int chosen = (a[left] > a[right]) ? a[left++] : a[right--];
        if(serejasTurn) sereja += chosen;
        else dima += chosen;
        serejasTurn = !serejasTurn;
    }
    cout << sereja << " " << dima;
}





//Option : 4

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n; int a[n],i=0,j=n-1;
	for(int q=0;q<n;q++)cin>>a[q];
	int sum[2]={0},jud=0;
	while(n--){
		if(a[i]>a[j]) sum[jud++%2]+=a[i++];
		else sum[jud++%2]+=a[j--];
	}
	cout<<sum[0]<<" "<<sum[1];
}

//Option 4:

