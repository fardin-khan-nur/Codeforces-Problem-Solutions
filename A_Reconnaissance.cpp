#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    long long d;
    cin >> n >> d;
    vector<long long> h(n);

    for (int i = 0; i < n; i++) {
        cin >> h[i];
    }

    sort(h.begin(), h.end());

    int c = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (h[j] - h[i] > d) {
                break;
            }
            c += 2;
        }
    }

    cout << c << endl;
    return 0;
}
