#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--)
    {
        int a, b;
        cin >> a >> b;

        if (a < b) {
            cout << "Happy Alex" << endl;
            return 0;
        }
    }
    cout << "Poor Alex" << endl;
    return 0;
}