#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a = (n/10)*10;
    int b = a+10;

    cout << ( n-a > b-n ? b: a) << endl;
    return 0;
}
