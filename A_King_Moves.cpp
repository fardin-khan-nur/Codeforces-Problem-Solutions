#include <iostream>
using namespace std;

int main() {
    string p;
    cin >> p;

    char c = p[0];
    char r = p[1];

    int m = 8;

    if (c == 'a' || c == 'h') m -= 3;
    if (r == '1' || r == '8') m -= 3;
    if ((c == 'a' || c == 'h') && (r == '1' || r == '8')) m += 1;

    cout << m << endl;
    return 0;
}
