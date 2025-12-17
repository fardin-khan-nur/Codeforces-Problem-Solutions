#include <bits/stdc++.h>
using namespace std;

int main() {
    int s[4];
    for (int i = 0; i < 4; i++) {
        cin >> s[i];
    }
    sort(s, s + 4);
    
    if ((s[0] + s[1] > s[2]) ||
        (s[0] + s[1] > s[3]) ||
        (s[0] + s[2] > s[3]) ||
        (s[1] + s[2] > s[3])) {
        cout << "TRIANGLE" << endl;
    }
    else if ((s[0] + s[1] == s[2]) ||
            (s[0] + s[1] == s[3]) ||
            (s[0] + s[2] == s[3]) ||
            (s[1] + s[2] == s[3])) {
        cout << "SEGMENT" << endl;
    }
    else {
        cout << "IMPOSSIBLE" << endl;
    }
    return 0;
}


#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    
    if (a > b) swap(a, b);
    if (b > c) swap(b, c);
    if (c > d) swap(c, d);
    if (a > b) swap(a, b);
    if (b > c) swap(b, c);
    if (a > b) swap(a, b);
    
    if ((a + b > c) || (b + c > d)) cout << "TRIANGLE" << endl;
    else if ((a + b == c) || (b + c == d)) cout << "SEGMENT" << endl;
    else cout << "IMPOSSIBLE" << endl;
    return 0;
}
