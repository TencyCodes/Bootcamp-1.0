#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n;
    int odd = 0, even = 0, posi = 0, nega = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> m;
        if (m % 2 == 0 || m == 0)
        {
            even++;
        }
        if (m % 2 != 0)
        {
            odd++;
        }
        if (m > 0)
        {
            posi++;
        }
        if (m < 0)
        {
            nega++;
        }
    }
    cout << posi << endl
         << nega << endl
         << even << endl
         << odd << endl;
}