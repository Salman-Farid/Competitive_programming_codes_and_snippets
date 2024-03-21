// And be patient. Allah will not waste the reward of the virtuous.
// اللَّهُ أَكْبَرُ //And ˹surely˺ your Lord will give so much to you that you will be pleased.
 #include <bits/stdc++.h>
 using namespace std;
 int main()
 {
    int n , f =0,l=0; cin >>n; string k;
    for(int i = 0; i < n; i++){
        char c;  cin>>c;
        if(c !='4'&& c !='7') {
            cout<<"NO";
            return 0;
        }
        k+=c;
    }
    for(int y=0,z=n-1;y<z;y++,z--){
        f+= (k[y]-'0'); l+= (k[z]-'0');
    }
    ((f==l)?cout<<"YES":cout<<"NO");
 }