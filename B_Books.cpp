#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;
    vector<int> arr(n);
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int mB = 0, cT = 0, s = 0;

    for (int i = 0; i < n; i++) {
        cT += arr[i];
        while (cT > t) {
            cT -= arr[s];
            s++;
        }
        mB = max(mB, i - s + 1);
    }

    cout << mB << endl;

    return 0;
}
