#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    
    set<int> bb;
    for (int i = 0; i < b; i++) {
        int x;
        cin >> x;
        bb.insert(x);
    }
    
    vector<int> cc(c);
    for (int i = 0; i < c; i++) {
        cin >> cc[i];
    }
    
    for (int num = 1; num <= a; num++) {
        if (bb.count(num)) cout << 1 << " ";
        else cout << 2 << " ";
    }
    return 0;
}
