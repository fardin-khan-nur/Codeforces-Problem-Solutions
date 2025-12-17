#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, d;
    cin >> n >> d;
    string o;
    int m_s = 0, c_s = 0;
    
    for (int i = 1; i <= d; i++) {
        cin >> o;
        int s = 0;
        for (int j = 0; j < o.length(); j++) {
            s += o[j] - '0';
        }
        if (s < n) {
            c_s++;
            m_s = max(m_s, c_s);
        }
        else {
            c_s = 0;
        }
    }
    cout << m_s << endl;
    return 0;
}
