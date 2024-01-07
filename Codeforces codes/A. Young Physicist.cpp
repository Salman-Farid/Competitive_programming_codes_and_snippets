// And be patient. Allah will not waste the reward of the virtuous. 
//اللَّهُ أَكْبَرُ
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int j =0,k=0,l=0;
    while(n--){
        int a,b,c;
        cin>>a>>b>>c;
        j +=a; k +=b; l +=c;
    }
    if(j==0 && k==0 && l==0) cout<<"YES";
    else cout<<"NO";
}


//Option: 2
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, c = 0,y=0;
    cin >> n;
    int arr[n][3];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int j = 0; j < 3; j++)
    {
        for (int i = 0; i < n; i++)
        {
            y+= arr[i][j];
        }
        if(y!=0){
            cout<<"NO";
            return 0;
        } 
        
    }
    cout << "YES";
}