//My Solution:
// And be patient. Allah will not waste the reward of the virtuous.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,q; cin>>n; cin >> p;
    int arr[p];
    for(int i=0; i<p; i++){
        cin>>arr[i];
  
    }
	cin>>q;
	int ar2[q];
	for(int w=0; w<q; w++){
		cin>>ar2[w];
	}
    vector<int> arr3;
    for (int r = 0; r < p; r++) {
        arr3.push_back(arr[r]); 
        
    }
	for(int y=0; y<q; y++) {
		arr3.push_back(ar2[y]); 
	}
    set<int> un(arr3.begin(), arr3.end());
    if(un.size() ==n) cout<<"I become the guy."<<endl;
    else cout<<"Oh, my keyboard!"<<endl;
 
}

//.........................................................................

//Solution 2:
// And be patient. Allah will not waste the reward of the virtuous.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,q; cin>>n; cin >> p;
    int arr[250];
    for(int i=0; i<p; i++) cin>>arr[i];
	cin>>q;
	for(int w=p; w<q+p; w++) cin>>arr[w];
    vector<int> arr2;
    for (int r = 0; r < p+q; r++) arr2.push_back(arr[r]); 
    set<int> un(arr2.begin(), arr2.end());
    if(un.size() ==n) cout<<"I become the guy."<<endl;
    else cout<<"Oh, my keyboard!"<<endl;
 
}