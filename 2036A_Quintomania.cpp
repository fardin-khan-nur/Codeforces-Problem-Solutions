#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int prevNote, currNote;
        bool isPerfect = true;

        cin >> prevNote;
        for (int i = 1; i < n; i++) {
            cin >> currNote;
            int interval = abs(currNote - prevNote);
            if (interval != 5 && interval != 7) {
                isPerfect = false;
            }
            prevNote = currNote;
        }

        cout << (isPerfect ? "YES" : "NO") << endl;
    }

    return 0;
}