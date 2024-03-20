// And be patient. Allah will not waste the reward of the virtuous.
// اللَّهُ أَكْبَرُ //And ˹surely˺ your Lord will give so much to you that you will be pleased.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;int c =0,d=0,e=0;
    for(int i =0 ; i <3; i++){
        getline(cin, s);
        for(int j =0 ; j <s.length() ; j++){
            if(i==0 && (s[j] == 'a' || s[j] == 'e' || s[j] == 'i'|| s[j] == 'o' || s[j] =='u'))  c++;
            if(i==1 && (s[j] == 'a' || s[j] == 'e' || s[j] == 'i'|| s[j] == 'o' || s[j] =='u'))  d++;
            if(i==2 && (s[j] == 'a' || s[j] == 'e' || s[j] == 'i'|| s[j] == 'o' || s[j] =='u'))  e++;
        }
    }
    ((c==5 && d==7 && e==5)? cout<< "YES":cout<< "NO");
}



//.........................................................

// And be patient. Allah will not waste the reward of the virtuous.
// اللَّهُ أَكْبَرُ //And ˹surely˺ your Lord will give so much to you that you will be pleased.
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s;int c =0,d=0,e=0; int a[] ={5,7,5};
//     for(int i =0 ; i <3; i++){
//         getline(cin, s); c=0;
//         for(int j =0 ; j <s.length() ; j++) if(s[j] == 'a' || s[j] == 'e' || s[j] == 'i'|| s[j] == 'o' || s[j] =='u')  c++;
//         if(c!=a[i]){
//             cout<<"NO"<<endl;
//             return 0;
//         }
//     }
//     cout<< "YES";
// }