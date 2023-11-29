#include <bits/stdc++.h>
using namespace std;

using cd = complex<double>;
const double PI = acos(-1);

/// 10^14 - max coefficient of product polynomial

void fft(vector<cd> &a, bool invert) {
    int n = a.size();

    for (int i = 1, j = 0; i < n; i++) {
        int bit = n >> 1;
        for (; j & bit; bit >>= 1)
            j ^= bit;
        j ^= bit;

        if (i < j)
            swap(a[i], a[j]);
    }

    for (int len = 2; len <= n; len <<= 1) {
        double ang = 2 * PI / len * (invert ? -1 : 1);
        cd wlen(cos(ang), sin(ang));
        for (int i = 0; i < n; i += len) {
            cd w(1);
            for (int j = 0; j < len / 2; j++) {
                cd u = a[i+j], v = a[i+j+len/2] * w;
                a[i+j] = u + v;
                a[i+j+len/2] = u - v;
                w *= wlen;
            }
        }
    }

    if (invert) {
        for (cd & x : a)
            x /= n;
    }
}

/// 1 + 2x + 3x^2 + 4x^3
/// [1, 2, 3, 4],  v[i] = coefficient of x^i

vector<long long int> multiply(vector<long long int> const& a, vector<long long int> const& b) {
    vector<cd> fa(a.begin(), a.end()), fb(b.begin(), b.end());
    int n = 1;
    while (n < a.size() + b.size())
        n <<= 1;
    fa.resize(n);
    fb.resize(n);

    fft(fa, false);
    fft(fb, false);
    for (int i = 0; i < n; i++)
        fa[i] *= fb[i];
    fft(fa, true);

    vector<long long int> result(n);
    for (int i = 0; i < n; i++)
        result[i] = llround(fa[i].real());

    result.resize((int)a.size() + (int)b.size() - 1);
    return result;
}


int main(){

    vector<long long int> v {9, 9};
    vector<long long int> w {9, 9};

    auto r = multiply(v, w);

    int carry = 0;
    for (int i = 0; i < r.size(); i++){
        r[i] += carry;
        carry = r[i] / 10;
        r[i] %= 10;
    }

    /// carry can have the last digits

    if(carry != 0) r.push_back(carry);


    reverse(r.begin(), r.end());
    for(long long int x : r){
        cout<<x<<" ";
    }

    return 0;
}
