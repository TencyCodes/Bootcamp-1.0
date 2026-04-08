#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long size;
    cin >> size;
    vector<long long> vec(size);
    long long sum = 0;
    for (long long i = 0; i < size; i++)
    {
        cin >> vec[i];
        sum += vec[i];
    }
    cout << sum << endl;
}