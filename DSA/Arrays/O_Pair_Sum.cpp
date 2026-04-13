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
        int size, element;
        cin >> size;
        vector<long long> vec(size);
        for (auto &x : vec)
        {
            cin >> x;
        }
        cin >> element;
        int count = 0;
        for (int i = 0; i < size; i++)
        {
            for (int j = i + 1; j < size; j++)
            {
                if (vec[i] + vec[j] == element)
                {
                    count++;
                }
            }
        }
        cout << count;

        cout << "\n";
    }
}