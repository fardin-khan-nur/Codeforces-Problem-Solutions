/*#include <iostream>
#include <set>
using namespace std;

int main() {
    int s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;
    set<int> horseshoes = {s1, s2, s3, s4}; //? set remove the duplicate value
    cout << 4 - horseshoes.size() << endl; //? then 4-unique
    return 0;
}*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int h[4], c = 0;
    for (int i = 0; i < 4; i++) {
        cin >> h[i];
    }
    sort(h, h + 4); // Sort the array to group identical elements together
    for (int i = 0; i < 3; i++) { // Compare adjacent elements only
        if (h[i] == h[i + 1]) c++;
    }
    cout << c << endl;
    return 0;
}
