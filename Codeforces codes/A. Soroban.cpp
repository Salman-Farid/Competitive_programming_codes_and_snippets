// And be patient. Allah will not waste the reward of the virtuous.
// اللَّهُ أَكْبَرُ //And ˹surely˺ your Lord will give so much to you that you will be pleased.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string ww, value, b[10] = {"O-|-OOOO", "O-|O-OOO", "O-|OO-OO", "O-|OOO-O", "O-|OOOO-", "-O|-OOOO", "-O|O-OOO", "-O|OO-OO", "-O|OOO-O", "-O|OOOO-"};
    cin >> value;reverse(value.begin(), value.end());
    for (char c : value)for (int i = 0; i < 10; i++) if (c == char(i+'0')) cout << b[i] << endl; 
}

//..................................................................................................................................................................



#include <bits/stdc++.h>
using namespace std;
int main()
{
    string ww,value, b0="O-|-OOOO", b1 = "O-|O-OOO", b2 = "O-|OO-OO", b3 = "O-|OOO-O", b4 = "O-|OOOO-", b5 = "-O|-OOOO", b6 = "-O|O-OOO", b7="-O|OO-OO",b8="-O|OOO-O",b9="-O|OOOO-";
    cin >> value ; reverse(value.begin(), value.end());
    for(auto c:value){
        if(c=='0') cout<<b0<<endl;
        if(c=='1') cout<<b1<<endl;
        if(c=='2') cout<<b2<<endl;
        if(c=='3') cout<<b3<<endl;
        if(c=='4') cout<<b4<<endl;
        if(c=='5') cout<<b5<<endl;
        if(c=='6') cout<<b6<<endl;
        if(c=='7') cout<<b7<<endl;
        if(c=='8') cout<<b8<<endl;
        if(c=='9') cout<<b9<<endl;
    }
}