#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    double d[t], sum = 0;
    for (int i = 0; i < t; i++)
    {
        cin >> d[i];
        sum += d[i];
    }
    double ans = sum / t;
    cout << fixed << setprecision(12) << ans << endl;
    
    //printf("%.12lf\n", ans); //!another method
    return 0;
}
