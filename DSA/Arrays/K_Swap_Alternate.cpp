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
        long long firstpointer = 0;
        long long secondpointer = 1;
        while (secondpointer < size)
        {
            swap(vec[firstpointer], vec[secondpointer]);
            firstpointer += 2;
            secondpointer += 2;
        }
        for (auto it : vec)
        {
            cout << it << " ";
        }
        cout << endl;
    }
}