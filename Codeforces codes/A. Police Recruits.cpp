#include <iostream>
using namespace std;
int main()
{
    int n, sum=0, c = 0;  cin >> n; int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    for (auto p = 0; p < n; p++)
    {
        if (arr[p] > 0) sum += arr[p];
        else if (sum > 0 && arr[p] < 0) sum += arr[p];
        else c++;
    }
    cout<<c<<endl;

}



#Other's solution:
.....................................................................................................................................................................................................................................
#include <iostream>
using namespace std;
int main()
{
    int n, police = 0, element, crime = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {\\
            {
                police--;
            }
        }
    }
    cout << crime;

    return 0;
}