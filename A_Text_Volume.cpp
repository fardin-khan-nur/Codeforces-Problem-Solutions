#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();
    string s;
    getline(cin, s);

    int m_v = 0, c_v = 0;
    for (char ch : s) {
        if (ch >= 'A' && ch <= 'Z')
        {
            c_v++;
        }
        else if (ch == ' ')
        {
            m_v = max(m_v, c_v);
            c_v = 0;
        }
    }
    m_v = max(m_v, c_v);

    cout << m_v << endl;
    return 0;
}
