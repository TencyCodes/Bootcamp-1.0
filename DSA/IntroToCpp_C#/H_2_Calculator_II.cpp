#include <bits/stdc++.h>
using namespace std;

void add(long long a, long long b)
{
    cout << a << " " << "+" << " " << b << " " << "=" << " " << a + b << endl;
}
void subtract(long long a, long long b)
{
    cout << a << " " << "-" << " " << b << " " << "=" << " " << a - b << endl;
}
void product(long long a, long long b)
{
    cout << a << " " << "*" << " " << b << " " << "=" << " " << a * b << endl;
}
void division(long long a, long long b)
{
    cout << a << " " << "/" << " " << b << " " << "=" << " " << a / b << endl;
}
void remainder(long long a, long long b)
{
    cout << a << " " << "%" << " " << b << " " << "=" << " " << a % b << endl;
}
int main()
{
    long long n, m;
    cin >> n >> m;
    add(n, m);
    cout << endl;
    subtract(n, m);
    cout << endl;
    product(n, m);
    cout << endl;
    division(n, m);
    cout << endl;
    remainder(n, m);
}
