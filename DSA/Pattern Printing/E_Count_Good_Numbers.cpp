#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, i, count = 0;
    cin >> n;
    while (n--)
    {
        cin >> i;
        if ((i != 0 && 18 % i == 0) || i % 45 == 0)
        {
            count++;
        }
    }
    cout << count;
}