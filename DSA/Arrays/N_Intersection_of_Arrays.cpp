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
        int size2;
        cin >> size;
        vector<long long> vec(size);
        for (auto &x : vec)
        {
            cin >> x;
        }
        cin >> size2;
        vector<long long> vec2(size2);
        for (auto &y : vec2)
        {
            cin >> y;
        }
        unordered_map<long long, int> freq;
        for (auto &it : vec2)
        {
            freq[it]++;
        }
        for (auto &x : vec)
        {
            if (freq[x] > 0)
            {
                cout << x << " ";
                freq[x]--;
            }
        }
        cout << "\n";
    }
}