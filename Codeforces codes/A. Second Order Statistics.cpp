// And be patient. Allah will not waste the reward of the virtuous.
// اللَّهُ أَكْبَرُ //And ˹surely˺ your Lord will give so much to you that you will be pleased.

#include <bits/stdc++.h>
using namespace std;
int main() {

	short n, x; cin >> n;
	set<short>st;

	for (short i = 0; i < n; i++) {
		cin >> x;
		st.insert(x);
	}
	if (st.size() == 1)
		cout << "NO";
	else {
		auto it = st.begin();
		cout << *(++it);
	}

}

//Option 2:
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n, k = INT_MAX, p = 0, u, y = 0;
//     bool t = false;
//     cin >> n;
//     int v[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> v[i];
//         if (v[i] < k)
//         {
//             p = k;
//             k = v[i];
//         }
//         else if (v[i] != k && v[i] < p)
//             p = v[i];
//     }
//     for( int j=0; j<n-1; j++) if (v[j] != v[j +1]) y += 1;

//     if (y == 0 || n == 1)
//         cout << "NO";
//     else
//         cout << p << endl;
// }



