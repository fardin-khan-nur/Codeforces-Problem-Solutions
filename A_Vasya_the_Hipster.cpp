#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b;
    cin >> a >> b;
    int m = min(a,b);
    int t = (a+b)/2;
    cout << m << " " << t-m << endl;
    return 0;
}
