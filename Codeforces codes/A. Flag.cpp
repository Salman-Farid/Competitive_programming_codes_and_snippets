// And be patient. Allah will not waste the reward of the virtuous.
// اللَّهُ أَكْبَرُ //And ˹surely˺ your Lord will give so much to you that you will be pleased.
#include <bits/stdc++.h>
using namespace std;
main() {
    int n, m, k = true; cin >> n >> m; char mt[n][m];
    for(int i = 0; i < n; ++ i) {
        for(int j = 0; j < m; ++ j) {
            cin >> mt[i][j];
            k &= (!j || mt[i][j - 1] == mt[i][j])&(!i || mt[i - 1][j] != mt[i][j]);
        }
    }
    cout << (k ? "YES" : "NO") << '\n';
}
................................................................................................
//Option 2:
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m; cin >> n>>m;
	vector<string> s(n);
	for(int i = 0; i < n; ++i) {
		cin >> s[i];
		for (int j = 0; j < m - 1; ++j) if (s[i][j] != s[i][j + 1]) return (cout<<"NO",0);
	}
	for (int i = 0; i < n - 1; ++i) if (s[i][0] == s[i + 1][0]) return (cout<<"NO",0);
	cout << "YES";
}
//.................................................
//Option 3:
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r, c; cin >> r >> c; char arr[r][c]; set<int>x;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++) cin >> arr[i][j];
    }
    for(int i=1;i<r;i++) if(arr[i][0]==arr[i-1][0]) return (cout<<"NO",0);
    for (int i = 0; i < r; i++)
    {
        for (int j = 1; j < c; j++)
        {
            if(arr[i][j]!=arr[i][j-1]) return (cout<<"NO",0);
        }
    }
    cout<<"YES";
}