// And be patient. Allah will not waste the reward of the virtuous.
#include <iostream>
#include <string>
using namespace std;

int main() {
    // Input word with "WUB"
    string bigWord; cin >> bigWord;
    string toErase = "WUB";
    size_t pos = bigWord.find(toErase);
    while (pos != string::npos) {
        bigWord.replace(pos, toErase.length(), " ");
        pos = bigWord.find(toErase);
    }
    cout << bigWord << endl;
}


//Options 2:
//     #include <bits/stdc++.h>
//     #include <string>
//     using namespace std;
//     int main() {
//         string s;
//         cin >> s;
//        for (size_t i = 0; i < s.length();){

//          if (s.substr(i, 3) == "WUB") {
//                  i += 3;
//             if (i > 3){
//                  cout << " ";  //Output space if not the first "WUB"
//             }
//         }   else {
//                cout << s[i];
//                   i++;
//         }
//     }
//           cout << endl;
//           return 0;
// }

// Option 3:
// And be patient. Allah will not waste the reward of the virtuous.
// #include<bits/stdc++.h>
//  using namespace std;
//  int main(){
//      string r;cin>>r;string l;
//      for(int i=0;i<r.size();i++)
// 	 {
//         if(r[i]=='W' && r[i+1]=='U' && r[i+2]=='B')
// 		{
//             i+=2;
//             if(!l.empty() && l.back()!=' ') l += ' ';
//         } 
// 		else l+=r[i];
//      }
//      cout<<l<<endl;
// }
	    	 	 		  	  	 			 	 				