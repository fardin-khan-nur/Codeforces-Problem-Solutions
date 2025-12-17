#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, c, wc = 0;
    cin >> n >> c;
    vector<int> w(n);
    for (int i = 0; i < n; i++) {
        cin >> w[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (abs(w[i + 1] - w[i]) <= c) wc++;
        else wc = 0;
    }
    wc++;
    cout << wc << endl;
    return 0;
}
//? Both ok
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, c;
    cin >> n >> c;
    int t[n];
    int count = 1;

    for (int i = 0; i < n; i++)
    {
        cin >> t[i];
        if (i > 0)
        {
            if (t[i] - t[i - 1] > c) count = 1;
            else count++;
        }
    }

    cout << count << endl;
    return 0;
}
