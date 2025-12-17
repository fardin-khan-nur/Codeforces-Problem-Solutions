#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        long long a, b, k;
        cin >> a >> b >> k;

        long long oS = (k + 1) / 2; 
        long long eS = k / 2; 
        long long r = (oS * a) - (eS * b);

        cout << r << endl;
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--)
    {
        long long a, b, k;
        cin >> a >> b >> k;
        long long s=0;
        for (long long i = 1; i <= k; i++)
        {
            if(i%2!=0) s+=a;
            else s-=b;
        }
        cout << s << endl;
    }
    return 0;
}
