#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s; getline(cin, s);
    int arr[s.size()]; int i= 0;
    for (char p : s) {
        if (isdigit(p)) arr[i++] = p - '0';
    }
    sort(arr, arr + i);
    for (int s = 0; s< i; s++) {
        cout << arr[s];
        if (s < i - 1) cout << "+";
    }
}
