#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;
        n = n * 2;
        vector<int> set(n);
        int even = 0, odd = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> set[i];
            if (set[i] % 2 == 0) even++;
            else odd++;
        }

        if (even == odd) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    
    return 0;
}
