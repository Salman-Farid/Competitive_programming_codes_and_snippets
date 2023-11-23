#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;

    if (t == 10) {
        if (n == 1) {
            cout << -1 << endl;
        } else {
            cout << "1" + string(n - 1, '0') << endl;
        }
    } else {
        cout << to_string(t) + string(n - 1, '0') << endl;
    }

    return 0;
}
