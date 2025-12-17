#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; 
    cin >> n;
    int x = (-1 + sqrt(1 + 8 * n)) / 2;
    if (x * (x + 1) / 2 == n) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 1; sum < n; i++) {
        sum += i;
        if (sum == n) {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}
