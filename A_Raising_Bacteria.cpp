#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a=0;
    cin >> n;
    while (n > 0) {
        if( n % 2 == 1 ) a++;
        n /= 2;
    }
    cout << a << endl;
    return 0;
}