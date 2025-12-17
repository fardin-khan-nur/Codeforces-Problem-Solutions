#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, c = 0;
    cin >> n;
    vector<int> d1(n);
    vector<int> d2(n);

    for (int i = 0; i < n; i++) {
        cin >> d1[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> d2[i];
    }
    sort(d1.begin(), d1.end());
    sort(d2.begin(), d2.end());

    for (int i = 0; i < n-1 ; i++) {
        if (d1[i] >= d2[i]) c = 0;
        else c++;
    }
    if (c == 0) cout << "Yes" << endl;
    else if ( c != 0) cout << "No" << endl;
    return 0;
}
// Below ok
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> x(n), y(n);

    for (int &stone : x) cin >> stone;
    for (int &stone : y) cin >> stone;

    int sum_x = accumulate(x.begin(), x.end(), 0);
    int sum_y = accumulate(y.begin(), y.end(), 0);

    cout << (sum_x >= sum_y ? "Yes" : "No") << endl;
    return 0;
}