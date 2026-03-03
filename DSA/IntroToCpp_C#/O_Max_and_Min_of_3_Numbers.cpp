#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, o;
    cin >> n >> m >> o;
    int maxi = max(o, max(n, m));
    int mini = min(o, min(n, m));
    cout << "Min = " << mini << endl
         << "Max = " << maxi;
}