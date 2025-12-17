#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, n;
    cin >> a >> b >> n;
    int l = __gcd(a, n);
    cout << l << endl;
    if(l%2==0)  cout << "0" << endl;
    else    cout << "1" << endl;
}