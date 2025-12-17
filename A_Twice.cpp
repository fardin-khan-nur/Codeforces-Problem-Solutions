#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, pairs = 0;
        cin >> n;
        vector<int> count(n + 1, 0);
        
        for (int i = 0; i < n; ++i)
        {
            int x;
            cin >> x;
            count[x]++;
        }

        for (int x : count)
        {
            pairs += x / 2;
        }
        cout << pairs << endl;
    }
    return 0;
}