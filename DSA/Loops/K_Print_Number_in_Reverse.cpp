#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long n1 = n;
    long long reverse = 0;
    long long digitCount = 0;

    long long temp = n;
    while (temp > 0)
    {
        digitCount++;
        temp /= 10;
    }
    while (n1 > 0)
    {
        long long ld = n1 % 10;
        reverse = (reverse * 10) + ld;
        n1 /= 10;
    }
    cout << setfill('0') << setw(digitCount) << reverse;
}