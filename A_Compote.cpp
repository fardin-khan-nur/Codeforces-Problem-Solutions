#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int x = min({a, b / 2, c / 4});
    int y = x * 7;

    cout << y << endl;
    return 0;
}
