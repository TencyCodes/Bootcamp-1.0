#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;
    long long arr[n];
    for (long long i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    long long maxi = arr[0];
    int index = 0;
    for (long long i = 1; i < n; i++)
    {
        if (arr[i] > maxi)
        {
            maxi = arr[i];
            index = i;
        }
    }
    cout << maxi << " " << index + 1;
}