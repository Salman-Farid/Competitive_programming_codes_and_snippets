Option:1
..............................................................
#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int> q;
    int h;
    for (int i = 0; i < 4 ; i++){
        cin >> h;
        q.insert(h);
    }
    
    cout << 4-q.size();
    return 0;
}


//Mine:
.......................................................
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int i, n = 4, j, count = 0;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);  
    for (j = 0; j < n; j++)
    {
        if (arr[j] == arr[j+1])
        {
            count += 1;
        }
    }
    cout << count << endl;
}

