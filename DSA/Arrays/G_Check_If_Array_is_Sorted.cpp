#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int size;
    cin >> size;
    vector<long long> vec(size);
    for (auto &x : vec)
    {
        cin >> x;
    }
    for (int i = 1; i < size; i++)
    {
        if (vec[i] < vec[i - 1])
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}