#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int h = a;
    while (a >= b) {
        int n_c = a / b;
        h += n_c;
        a = n_c + (a % b);
    }

    cout << h << endl;
    return 0;
}