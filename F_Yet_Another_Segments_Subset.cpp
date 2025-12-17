#include <bits/stdc++.h>
using namespace std;

const int mod = 1e9 + 7;
#define ll long long
#define test  
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define fo(i, a, n) for (int i = a; i < n; i++)
#define rfo(i, a, b) for (int i = a; i >= b; i--)
#define fi first
#define se second
#define pb push_back
#define all(x) x.begin(), x.end()

int dp1[3001], dp2[3001];
vector<pair<pair<int, int>, int>> sd;

void sv(int id) {
    if (sd.empty()) return;
    int mx[sd.size()] = {0}, dp3[sd.size()];
    for (int j = 0; j < sd.size(); j++) {
        int s = 0, e = j - 1, an = -1;
        while (s <= e) {
            int mid = (s + e) / 2;
            if (sd[mid].fi.fi < sd[j].fi.se)
            {
                s = mid + 1;
                an = mid;
            } else e = mid - 1;
        }
        int h = 0;
        if (an != -1) h = mx[an];
        dp3[j] = dp1[sd[j].se] + h;
        mx[j] = (j ? max(mx[j - 1], dp3[j]) : dp3[j]);
    }
    dp1[id] = mx[sd.size() - 1] + 1;
}

bool mycomp(pair<int, int> p1, pair<int, int> p2) {
    if (p1.fi == p2.fi) return p1.se > p2.se;
    return p1.fi < p2.fi;
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++) dp1[i] = dp2[i] = 0;
        vector<pair<int, int>> v(n);
        for (int i = 0; i < n; i++) cin >> v[i].se >> v[i].fi;
        sort(all(v), mycomp);
        int ans = 1;
        dp1[0] = dp2[0] = 1;
        for (int i = 0; i < n; i++) {
            dp1[i] = 1;
            for (int j = 0; j < i; j++) {
                if (v[j].fi <= v[i].fi && v[j].se >= v[i].se) sd.pb({{v[j].fi, v[j].se}, j});
            }
            sv(i);
            sd.clear();
            dp2[i] = dp1[i];
            for (int j = i - 1; j >= 0; j--) {
                if (v[j].fi < v[i].se) dp2[i] = max(dp2[i], dp2[j] + dp1[i]);
            }
            ans = max(ans, dp2[i]);
        }
        cout << ans << endl;
    }
}