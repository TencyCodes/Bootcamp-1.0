#include<bits/stdc++.h>
using namespace std;

void add(int a,int b){
    cout << a << " " << "+" << " " << b <<" "<< "=" << " " << a + b << endl;
}
void subtract(int a,int b){
    cout << a << " " << "-" << " " << b <<" "<< "=" << " " << a - b << endl;
}
void product(int a,int b){
    cout << a << " " << "*" << " " << b <<" "<< "=" << " " << a * b << endl;
}
void division(int a,int b){
    cout << a << " " << "/" << " " << b << " "<< "=" << " " << a / b << endl;
}
void remainder(int a,int b){
    cout << a << " " << "%" << " " << b << " "<< "=" << " " << a % b << endl;
}
int main(){
    int n, m;cin>>n>>m;
    add(n, m);subtract(n, m);product(n, m);division(n, m);remainder(n, m);
}

