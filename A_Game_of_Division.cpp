#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        int index = -1;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++)
        {
            bool canWin = false;
            for (int j = 0; j < n; j++)
            {
                if (i != j && abs(a[i] - a[j]) % k != 0)
                {
                    canWin = true;
                    break;
                }
            }
            if (canWin)
            {
                index = i + 1;
                break;
            }
        }

        if (index != -1)
        {
            cout << "YES" << endl;
            cout << index << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
