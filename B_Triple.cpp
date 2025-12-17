#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        unordered_map<int, int> f;
        int r = -1;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            f[x]++;
            if (f[x] == 3) r = x;
        }
        cout << r << endl;
    }
    return 0;
}
