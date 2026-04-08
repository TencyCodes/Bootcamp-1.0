#include <bits/stdc++.h>
using namespace std;

// Fast IO
#define fastio()                 \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);               \
    cout.tie(NULL)

// Solve Function
void solve()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
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
    // cin >> t; // comment this line if single test case
    while (t--)
    {
        solve();
    }

    return 0;
}