// And be patient. Allah will not waste the reward of the virtuous.
// اللَّهُ أَكْبَرُ //And ˹surely˺ your Lord will give so much to you that you will be pleased.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0,u=0 ; cin >> n; int arr[n];
    for(int j = 0; j < n; ++j) {
        cin >> arr[j];
        if (arr[j]%2==0) c+=1;
        else u+=1;
    }
    for(int i = 0; i < n; i++){
        if (c>u && arr[i]%2 != 0) cout<<i+1;
        else if (c<u && arr[i]%2 == 0) cout<<i+1;
    }
}




//............................................................
// And be patient. Allah will not waste the reward of the virtuous.
// اللَّهُ أَكْبَرُ //And ˹surely˺ your Lord will give so much to you that you will be pleased.

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n; cin >> n;
//     int odd = 0,oddind;int even = 0,evenind;
//     for(int i = 0;i<n;i++){
//         int x; cin >> x;
//         if(x%2==0){
//             even++;
//             evenind = i;
//         }
//         else{
//             odd++;
//             oddind = i;
//         }
//     }
//     if(odd == 1) cout<<oddind+1<<endl;
//     else cout<<evenind+1<<endl;
// }