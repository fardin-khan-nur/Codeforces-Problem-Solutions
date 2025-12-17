#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;
        int e = 0, o = 0;

        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            if (a == 1) o++;
            else if (a == 2) e++;
        }

        if (e % 2 == 0 && o % 2 == 0) cout << "YES" << endl;
        else if (e % 2 != 0 && o >= 2 && o % 2 == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}


#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;
        int e = 0, o = 0, s = 0;

        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            s += a;
            if (a == 1) o++;
            else if (a == 2) e++;
        }

        if (s % 2 != 0) cout << "NO" << endl;
        else {
            int h = s / 2;
            if (h % 2 == 0 || (h % 2 != 0 && o > 0)) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
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
        int n; cin >> n;
        int c[n];
        int e=0 ,o=0;
        for (int i = 0; i < n; i++)
        {
            cin >> c[i];
            if(c[i] == 2) e++;
            else o++;
        }
        if(e%2==0 && o%2==0) cout << "YES" << endl;
        else if (e%2!=0 && o>=2 && o%2==0) cout << "YES" << endl;
        else cout << "NO" << endl;
        
    }
    return 0;
}