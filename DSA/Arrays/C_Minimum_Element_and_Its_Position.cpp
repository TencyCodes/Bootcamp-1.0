#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long size;
    cin >> size;
    vector<long long> vec(size);

    for (int i = 0; i < size; i++)
    {
        cin >> vec[i];
    }
    long long mini = vec[0];
    long long position = 0;
    for (int i = 1; i < size; i++)
    {
        if (vec[i] < mini)
        {
            mini = vec[i];
            position = i;
        }
    }
    cout << mini << " " << position + 1 << endl;
}