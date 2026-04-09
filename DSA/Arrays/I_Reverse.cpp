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
    reverse(vec.begin(), vec.end());
    for (auto it : vec)
    {
        cout << it << " ";
    }
}