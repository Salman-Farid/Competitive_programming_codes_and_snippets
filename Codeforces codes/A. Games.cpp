#include <iostream>
using namespace std;

int main()
{
	int n, i, j, c = 0;
	cin >> n;
	int arr[n][2];
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < 2; j++)
		{
			cin >> arr[i][j];
		}
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (arr[i][0] == arr[j][1])
			{
				c++;
			}
		}
	}
	cout << c << endl;
}

#Other's solution:
.........................................................................................................................................................................................

#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int* home, * guest;
	home = new int[n];
	guest = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> home[i] >> guest[i];
	}
	int count = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			
			if (home[i] == guest[j])
				count++;
		}
	}
	cout << count << endl;
}