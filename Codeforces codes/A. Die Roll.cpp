#include <iostream>
using namespace std;
int fraction(int a, int b)
{
    if (b == 0)
        return a;
    return fraction(b, a % b);
}
void lowestFraction(int num1, int num2)
{
    int denom;
    denom = fraction(num1, num2);
    num1 /= denom;
    num2 /= denom;
    cout << num1 << "/" << num2;
}
int main()
{

    int i, j, k, n = 6, count = 0;
    cin >> j >> k;
    for (i = 1; i <= n; i++)
    {
        if (i >= j and i >= k)
            count++;
    }
    int op = count % n;
    lowestFraction(count, n);
}
