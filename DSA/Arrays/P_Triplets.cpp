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
        int size, target;
        cin >> size;
        vector<long long> vec(size);
        for (auto &x : vec)
        {
            cin >> x;
        }

        cin >> target;
        int k = 0, sum = 0, count = 0;
        for (int i = 0; i < size; i++)
        {
            for (int j = i + 1; j < size; j++)
            {
                for (int k = j + 1; k < size; k++)
                {
                    int sum = vec[i] + vec[j] + vec[k];
                    if (sum == target)
                        count++;
                }
            }
        }
        cout << count << endl;
    }
}