#include<bits/stdc++.h>
using namespace std;


long long factfast(long long n){
    long long res = 1;
    for (long long i = 2; i <=n;i++){ res*=i;}
    return res;

}

int main() { long long n, r, ncr;
    cin >> n >> r;
    long long nf = factfast(n);
    long long rf = factfast(r);
    long long nrf = factfast(n - r);
     ncr = nf / (rf * nrf);
    cout << ncr << endl;
}