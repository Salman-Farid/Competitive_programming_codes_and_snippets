// And be patient. Allah will not waste the reward of the virtuous.

#include <bits/stdc++.h>
using namespace std;

int main() {
    int Q, y, type; cin >> Q; string x;
    unordered_map<string, int> m;
    for (int i = 0; i < Q; i++) {
        cin >> type;
        switch (type) {
            case 1:
                cin >> x >> y;
                m[x] += y;
                break;

            case 2:
                cin >> x;
                m.erase(x);
                break;

            case 3:
                cin >> x;
                cout<<m[x]<<endl;
                break;
        }
    }

}
