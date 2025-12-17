#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> r;
    
    for (int i = 20; i >= 0; --i) {
        if ((n & (1 << i)) > 0) {
            r.push_back(i + 1);
        }
    }
    
    for (size_t i = 0; i < r.size(); ++i) {
        if (i > 0) cout << " ";
        cout << r[i];
    }
    cout << endl;

    return 0;
}