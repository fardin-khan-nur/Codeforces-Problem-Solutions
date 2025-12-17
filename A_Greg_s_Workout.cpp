#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int e[n];
    int ch = 0, bi = 0, ba = 0;
    for (int i = 0; i < n; i++) {
        cin >> e[i];
        if (i % 3 == 0) ch += e[i];
        else if (i % 3 == 1) bi += e[i];
        else ba += e[i];
    }
    if (ch > bi && ch > ba) cout << "chest" << endl;
    else if (bi > ch && bi > ba) cout << "biceps" << endl;
    else cout << "back" << endl;
    return 0;
}
