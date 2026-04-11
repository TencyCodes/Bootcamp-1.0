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
        vector<long long> vec(size);
        for (auto &x : vec)
        {
            cin >> x;
        }
        unordered_map<long long, long long> freq;
        for (auto x : vec)
        {
            freq[x]++;
        }
        for (auto it : freq)
        {
            if (it.second == 2)
            {
                cout << it.first;
            }
        }
        cout << '\n';
    }
}