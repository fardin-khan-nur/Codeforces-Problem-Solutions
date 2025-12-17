#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        sort(a.begin(), a.end());

        int m_d = INT_MAX;
        for (int i = 0; i < n - 1; i++)
        {
            int d = a[i + 1] - a[i];
            if (d < m_d) m_d = d;
        }
        cout << m_d << endl;
    }
    return 0;
}
