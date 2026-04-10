#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int size;
        cin >> size;

        for (int i = 1; i <= size; i += 2)
        {
            cout << i << " ";
        }
        int newsize = (size % 2 == 0) ? size : size - 1;
        for (int i = newsize; i >= 2; i -= 2)
        {
            cout << i << " ";
        }

        cout << endl;
    }
}