1. By vector with 3 array!!

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int n, skill;
    cin >> n;
    vector<int> pr, ma, pe;
    for (int i = 0; i < n; i++)
    {
        cin >> skill;
        if (skill == 1)
            pr.push_back(i+1);
        else if (skill == 2)
            ma.push_back(i+1);
        else
            pe.push_back(i+1);
    }
    int maxt = min({pr.size(), ma.size(), pe.size()});
    cout << maxt << endl;

    for (int i = 0; i < maxt; i++)
    {
        cout << pr[i] << " " << ma[i] << " " << pe[i] << endl;
    }
}




.......................................................................................................



2. By Just array[without vector]

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n; 
    cin >> n; 
    int skills[5000]; 
    int skillCount[4] = {0};

    for (int i = 0; i < n; i++)
    {
        cin >> skills[i];
        skillCount[skills[i]]++;
    }

    int maxTeams = min({skillCount[1], skillCount[2], skillCount[3]});

    cout << maxTeams << endl;

    int used[5000] = {0};
    for (int j = 0; j < maxTeams; j++)
    {
        for (int i = 1; i <= 3; i++)
        {
            for (int k = 0; k < n; k++)
            {
                if (skills[k] == i && !used[k])
                {
                    cout << k + 1 << " ";
                    used[k] = 1;
                    break;
                }
            }
        }
        cout << endl;
    }
}



........................................................................

3. By vector but in a more optimized way!

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n; 
    cin >> n; 
    int skills[5000]; 
    vector<int> team[4];

    for (int i = 0; i < n; i++)
    {
        cin >> skills[i];
        team[skills[i]].push_back(i+1); 
    }

    int maxTeams = min({team[1].size(), team[2].size(), team[3].size()});

    cout << maxTeams << endl;

    for (int j = 0; j < maxTeams; j++)
    {
        for (int i = 1; i <= 3; i++)
        {
             cout <<team[i][j] << " "; 
        }
        cout << endl;
    }

    return 0;
}
