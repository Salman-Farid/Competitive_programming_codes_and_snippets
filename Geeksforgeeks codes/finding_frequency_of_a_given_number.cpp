//https://practice.geeksforgeeks.org/problems/find-the-frequency/1
//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


int findFrequency(vector<int> v, int x)

{
    int count=0;
    for (int i = 0 ; i<v.size(); i++){
        if (v[i]==x){
            count +=1;
        }
    }
    return count;
}



//{ Driver Code Starts.
int main() {
	
	int testcase;
	
	cin >> testcase;
	
	while(testcase--){
	    int N;
	    cin >> N;
	    
	    // Declaring vector 
	    vector<int> v;
	        
	    // Taking vector element input
	    for(int i = 0;i<N;i++){
	        int k;
	        cin >> k;
	        v.push_back(k);
	    }
	    
	    // element whose frequency to be find
	    int x;
	    cin >> x;
	    cout << findFrequency(v, x) << endl;
	}
	
	return 0;
}
// } Driver Code Ends