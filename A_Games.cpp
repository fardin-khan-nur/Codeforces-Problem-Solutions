#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> t(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> t[i].first >> t[i].second;
    }

    int count = 0;
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i != j && t[i].first == t[j].second) {
                count++;
            }
        }
    }
    
    cout << count << endl;
    return 0;
}
