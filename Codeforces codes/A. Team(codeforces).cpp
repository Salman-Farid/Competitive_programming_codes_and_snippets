#include <iostream>
using namespace std;
int main()
{
    int i, j, n;
    cin >> n;
    int l[n][3] = {};
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cin >> l[i][j];
        }
    }
    int count = 0;
    int main_count = 0;
    for (int i = 0; i < n; i++)
    {
        count =0;
        for (int j = 0; j < 3; j++)
        {

            if (l[i][j] == 1)
            {
                count += 1;
            }
        }
        if (count >= 2)
        {
            main_count++;
        }
    }
    cout << main_count << endl;
}



// external solution:
.......................................................................................................................................................................................................................................

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c;
    cin>>n;
    int count=0;
    for(int i=0;i<n;i++){
        cin>>a>>b>>c;
        if(a+b+c>=2){
            count++;
        }
    }
    cout<<count;
    
}


// external solution 2:
........................................................................................................................................................................................

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int number_of_problems;
    cin >> number_of_problems;
    int sum;
    int count = 0;
    int a[3];
    for (int i = 0; i < number_of_problems; i++)
    {
        sum = 0;
        for (int j = 0; j < 3; j++)
        {
            cin >> a[j];
            sum += a[j];
        }
        if (sum >= 2)
            count += 1;
    }
    cout << count;
    return 0;
}