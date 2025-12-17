#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    set<int> bulbs_on;

    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        for (int j = 0; j < x; ++j)
        {
            int bulb;
            cin >> bulb;
            bulbs_on.insert(bulb);
        }
    }

    if (bulbs_on.size() == m)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}