#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        int height = 1;
        bool died = false;
        
        for (int i = 0; i < n; ++i)
        {
            if (a[i] == 0)
            {
                if (i > 0 && a[i-1] == 0)
                {
                    died = true;
                    break;
                }
            }
            else
            {
                if (i > 0 && a[i-1] == 1)
                {
                    height += 5;
                }
                else
                {
                    height += 1;
                }
            }
        }

        if (died)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << height << endl;
        }
    }

    return 0;
}
