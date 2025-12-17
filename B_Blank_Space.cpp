#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;
        vector<int> b(n);

        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        int m_b = 0, c_b = 0;

        for (int i = 0; i < n; i++) {
            if (b[i] == 0) {
                c_b++;
                m_b = max(m_b, c_b);
            }
            else c_b = 0;

        }
        cout << m_b << endl;
    }

    return 0;
}