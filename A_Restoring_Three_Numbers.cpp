#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int x[4];
    for (int i = 0; i < 4; ++i) {
        cin >> x[i];
    }

    sort(x, x + 4);
    int a_b_c = x[3];

    int a_b = x[0];
    int a_c = x[1];
    int b_c = x[2];

    int a = a_b_c - b_c;
    int b = a_b_c - a_c;
    int c = a_b_c - a_b;
    
    cout << a << " " << b << " " << c << endl;

    return 0;
}