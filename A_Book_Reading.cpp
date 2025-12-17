#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, t, c=0;
    cin >> n >> t;
    int nt[n];
    for (int i = 0; i < n; i++)
    {
        cin >> nt[i];
        if((abs(86400-nt[i]))<nt[i]) c++;
    }
    cout << c << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;
    int remaining_time = t;

    for (int i = 1; i <= n; i++) {
        int work_time;
        cin >> work_time;
        remaining_time -= (86400 - work_time);
        if (remaining_time <= 0)
        {
            cout << i << endl;
            return 0;
        }
    }
    return 0;
}
