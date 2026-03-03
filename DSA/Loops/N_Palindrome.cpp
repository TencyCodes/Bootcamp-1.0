#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long n1 = n, palin = 0;
    while (n1 > 0)
    {
        palin = (palin * 10) + n1 % 10;
        n1 /= 10;
    }
    if (palin == n)
        cout << "YES";
    else
        cout << "NO";
}