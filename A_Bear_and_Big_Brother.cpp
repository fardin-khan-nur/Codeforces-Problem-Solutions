#include <bits/stdc++.h>
using namespace std;

int main() {
    int l, b;
    cin >> l >> b;
    int c = 0;
    for (int i = 1; i <= 10; i++)
    {
        l *= 3;
        b *= 2;
        c++;
        if (l > b) break;
    }

    cout << c << endl;
    return 0;
}
