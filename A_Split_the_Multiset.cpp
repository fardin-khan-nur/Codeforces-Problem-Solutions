#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n, k;
        cin >> n >> k;

        if (n == 1) {
            cout << 0 << '\n';
            continue;
        }

        int cnt = 1;   // শুরুতে ১টা সংখ্যা
        int ops = 0;

        while (cnt < n) {
            cnt += (k - 1);   // এক অপারেশনে সর্বোচ্চ বৃদ্ধি
            ops++;
        }

        cout << ops << '\n';
    }

    return 0;
}
