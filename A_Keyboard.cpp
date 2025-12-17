#include <bits/stdc++.h>
using namespace std;

int main() {
    string k = "qwertyuiopasdfghjkl;zxcvbnm,./";
    char d;
    string t;

    cin >> d >> t;

    int sft = (d == 'L') ? 1 : -1;

    for (char &c : t) {
        size_t pos = k.find(c);
        c = k[pos + sft];
    }

    cout << t;
    return 0;
}
