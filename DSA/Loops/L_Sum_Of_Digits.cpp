#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long n1 = n;
    long long sum = 0;
    while (n1 > 0)
    {
        sum += n1 % 10;
        n1 /= 10;
    }
    cout << sum;
}