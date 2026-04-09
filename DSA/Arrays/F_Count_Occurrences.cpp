#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size, target;
    cin >> size >> target;
    vector<long long> vec(size);
    for (auto &x : vec)
    {
        cin >> x;
    }
    auto occurence = count(vec.begin(), vec.end(), target);

    cout << occurence << endl;
}