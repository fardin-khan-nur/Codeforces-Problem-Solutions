#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int m, a, b, c;
        cin >> m >> a >> b >> c;

        int row1 = min(a, m);
        int row2 = min(b, m);

        int r_s = 2 * m - (row1 + row2);

        int no_s = min(c, r_s);

        int total_seated = row1 + row2 + no_s;
        
        cout << total_seated << endl;
    }
    
    return 0;
}