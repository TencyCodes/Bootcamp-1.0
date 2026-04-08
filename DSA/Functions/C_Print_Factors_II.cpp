#include <bits/stdc++.h>
using namespace std;

// Fast IO
#define fastio()                  \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);               \
    cout.tie(NULL);
// Solve Function
void solve()
{
    int n;
    cin >> n;
    for (int i = n; i > 0; i--)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }
}

int main()
{
    fastio();
    int t = 1;
    while (t--)
    {
        solve();
    }

    return 0;
}