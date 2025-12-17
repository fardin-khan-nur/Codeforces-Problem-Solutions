#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        int odd_count = 0, even_count = 0;
        long long sum = 0;

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            sum += arr[i];
            if (arr[i] % 2 == 0)
                even_count++;
            else
                odd_count++;
        }

        if (sum % 2 != 0) {
            cout << "YES" << endl;
        } else if (odd_count > 0 && even_count > 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
