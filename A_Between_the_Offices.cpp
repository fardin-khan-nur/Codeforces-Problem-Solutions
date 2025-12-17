#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    string f; cin >> f;
    int sc = 0, fc = 0;

    for (int i = 0; i < n - 1; i++) { 
        if (f[i] == 'S' && f[i + 1] == 'F') sc++;
        if (f[i] == 'F' && f[i + 1] == 'S') fc++;
    }

    cout << (sc > fc ? "YES" : "NO") << endl;

    return 0;
}
