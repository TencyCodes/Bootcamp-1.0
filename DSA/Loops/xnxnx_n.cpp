#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long x, y;
    cin >> x >> y;
    long long result = 1;

    while (y > 0)
    {
        if (y & 1)
            result *= x;

        x *= x;
        y >>= 1;
    }
    cout << result;
    return 0;
}
