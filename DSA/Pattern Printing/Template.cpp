#include <bits/stdc++.h>
using namespace std;

int main()
{
    int number = 5;
    int *pointer;
    pointer = &number;
    cout << number << endl
         << &number << endl;
    number++;
    cout
        << pointer << endl
        << &pointer << endl;

    *pointer += 1;
    cout << "Pointer Updated" << endl;
    cout << number << endl;
}