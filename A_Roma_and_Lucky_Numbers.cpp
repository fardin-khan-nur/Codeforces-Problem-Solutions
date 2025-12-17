#include <iostream>
using namespace std;

int main() {
    int n, k, c = 0;
    cin >> n >> k;

    while (n--) {
        int a;
        cin >> a;
        
        int l_c = 0;
        while (a > 0) {
            int d = a % 10;
            if (d == 4 || d == 7) l_c++;
            a /= 10;
        }
        
        if (l_c <= k) c++;
    }
    cout << c << endl;
    return 0;
}
