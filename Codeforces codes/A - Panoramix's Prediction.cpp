//Options: 1
// And be patient. Allah will not waste the reward of the virtuous.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m,prevPrime; cin >> n >> m;
    for (int i = 2; i <= 50; i++)
    {
        bool isprime = true;
        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                isprime = false;
                break;
            }
        }
        if (isprime) {
            if (prevPrime == n && i == m) {
                cout << "YES";
                return 0;
            }
            prevPrime = i;
        }
    }
    cout<< "NO";
}
//Options: 2
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int a,b; cin>>a>>b; bool f=0;
//     int x[30]={ 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
//     for(int i=0;i<30;i++)
//     {
//         if(a==x[i]&&b==x[i+1]) f=1;
//     }
//     if(f==1) cout<<"YES";
//     else cout<<"NO";
// }





//Options: 3
// And be patient. Allah will not waste the reward of the virtuous.
// #include <iostream>
// using namespace std;
// bool isPrime(int num) {
//     for (int i = 2; i * i <= num; ++i) {
//         if (num % i == 0) {
//             return false;
//         }
//     }
//     return num > 1;
// }

// int main() {
//     int n, m; cin >> n >> m;
//     for (n++; !isPrime(n);n++);
//     cout << (n == m ? "YES" : "NO") <<endl;
// }
