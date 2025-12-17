#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int l[] = {4, 7, 47, 74, 444, 447, 474, 477, 744, 747, 777, 774};
    
    for (int i = 0; i < 12; i++) {
        if (n % l[i] == 0) {
            cout << "YES" << endl;
            return 0;
        }
    }
    
    cout << "NO" << endl;
    return 0;
}
