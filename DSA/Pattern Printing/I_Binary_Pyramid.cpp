#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int start = 0;
    for (int i = 1; i <= n; i++)
    {
        start = 0;
        for (int j = 1; j <= i; j++)
        {
            if ((i & 1))
            {
                cout << start;
                start = !start;
            }
            else
            {
                start = !start;
                cout << start;
            }
        }
        cout << "\n";
    }
}