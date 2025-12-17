#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> L(n);
    for (int i = 0; i < n; i++)
        cin >> L[i];

    sort(L.begin(), L.end());
    
    int q;
    cin >> q;
    while (q--) {
        int x;
        cin >> x;
        cout << upper_bound(L.begin(), L.end(), x) - L.begin() << endl;
    }
    return 0;
}
