#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, c = 0, tC = 0, fC;
    cin >> n;

    for (int i = 1; ; i++) {
        fC = (i * (i + 1)) / 2;
        tC += fC;
        if (tC > n) break;
        c++;
    }

    cout << c << endl;
    return 0;
}
