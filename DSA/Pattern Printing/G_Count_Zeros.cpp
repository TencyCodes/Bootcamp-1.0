#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    string str = to_string(n);
    long long count = 0;
    int l = str.length();
    for (long long i = 0; i < l; i++)
    {
        if (str[i] == '0')
        {
            count++;
        }
    }
    cout << count << endl;
}